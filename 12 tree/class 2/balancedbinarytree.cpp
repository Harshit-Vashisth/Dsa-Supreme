#include<bits/stdc++.h>
class Solution {
public:
      int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        int l=maxDepth(root->left);
        int r=maxDepth(root->right);
       return max(l,r)+1;
    }
   
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
       int leftheight=maxDepth(root->left);
       int rightheight=maxDepth(root->right);
       int diff=abs(leftheight-rightheight);

       bool ans=(diff<=1);
       bool leftans=isBalanced(root->left);
       bool rightans=isBalanced(root->right);
       return (ans&&leftans&&rightans);
    }
};