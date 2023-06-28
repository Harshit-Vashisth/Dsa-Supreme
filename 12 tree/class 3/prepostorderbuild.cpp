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
public:
  
  TreeNode* construct(vector<int>& pre, vector<int>& post, int s1,int e1,int s2,int e2)
  {
    if(s1>e1 || s2>e2) return NULL;
    TreeNode* root=new TreeNode(pre[s1]);
    if(s1==e1) return root;
    
    int idx=s2;
    while(pre[s1+1]!=post[idx])
      idx++;
    
    int b=idx-s2+1;

    root->left=construct(pre,post,s1+1,s1+b,s2,idx);
    root->right=construct(pre,post,s1+b+1,e1,idx+1,e2-1);
    
    return root;
    
  }
  
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        TreeNode* root= construct(preorder,postorder,0,preorder.size()-1,0,postorder.size()-1);
      return root;
    }
};