#include<bits/stdc++.h>
using namespace std;
class TreeNode{
public:
    TreeNode* left;
    TreeNode* right;
    int val;
};
class Solution {
    private:
    unordered_map<int,int> mp;
    void mapping(vector<int>& inorder,int &size){
        for(int i=0;i<size;i++){
            mp[inorder[i]]=i;
        }
    }
public:
    TreeNode* solve(vector<int>& inorder, vector<int>& postorder,int &postindex,int inorderstart,int inorderend){
        if((postindex<0)||(inorderstart>inorderend))
            return NULL;
        
        int ele=postorder[postindex];
        postindex--;
        int pos=mp[ele];
        TreeNode* root=new TreeNode(ele);
        root->right=solve(inorder,postorder,postindex,pos+1,inorderend);
        root->left=solve(inorder,postorder,postindex,inorderstart,pos-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int size=inorder.size();
        int postindex=size-1,inorderend=size-1,inorderstart=0;
        mapping(inorder,size);
        return solve(inorder,postorder,postindex,inorderstart,inorderend);
    }
};