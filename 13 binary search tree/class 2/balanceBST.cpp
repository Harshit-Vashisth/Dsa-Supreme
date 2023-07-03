#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    TreeNode* left;
    TreeNode* right;
    int val;
    TreeNode(int data){

    }
};
class Solution {
    void inorderarray(TreeNode* &root,vector<int> &inorder){
        if(root==NULL)
        return ;
        inorderarray(root->left,inorder);
        inorder.push_back(root->val);
        inorderarray(root->right,inorder);
    }
    TreeNode* buildtree(vector<int>& inorder,int s,int e){
    if(s>e)
        return NULL;
    int mid=s+(e-s)/2;
    int ele=inorder[mid];
    TreeNode* root=new TreeNode(ele);
    root->left=buildtree(inorder,s,mid-1);
    root->right=buildtree(inorder,mid+1,e);
        return root;
    }
    
public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> inorder;
        inorderarray(root,inorder);
        return buildtree(inorder,0,inorder.size()-1);
    }
};