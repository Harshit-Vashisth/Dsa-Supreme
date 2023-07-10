#include <bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data){
    this->data=data;
    left=NULL;
    right=NULL;
}
};
TreeNode* buildtree(){
   int data;
   cin>>data;
   if(data==-1)
   return NULL;
   
   TreeNode* root=new TreeNode(data);
   cout<<"Enter the left value"<<endl;
   root->left=buildtree();
   cout<<"Enter the right value"<<endl;
   root->right=buildtree();
}

    class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        vector<TreeNode*> nums;
        nums.push_back(root);
        int i=0;
        while(i<nums.size()&& nums[i]){
            nums.push_back(nums[i]->left);
            nums.push_back(nums[i]->right);
            i++;
        }
        while(i<nums.size()&&!nums[i])
            i++;
            return i==nums.size();
    }
};