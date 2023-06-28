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
public:
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder,int &size,int &preindex,int inorderstart,int inorderend,unordered_map<int,int> &mp){
        if((preindex>=size)||(inorderstart>inorderend))
            return NULL;

        int ele=preorder[preindex++];
        TreeNode* root=new TreeNode(ele);
        int pos=mp[ele];
        root->left=solve(preorder,inorder,size,preindex,inorderstart,pos-1,mp);
        root->right=solve(preorder,inorder,size,preindex,pos+1,inorderend,mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int size=preorder.size();
        int preindex=0,inorderstart=0,inorderend=size-1;
    unordered_map<int,int> mp;
         for(int i=0;i<size;i++)
            mp[inorder[i]]=i;
        return solve(preorder,inorder,size,preindex,inorderstart,inorderend,mp);
    }
};