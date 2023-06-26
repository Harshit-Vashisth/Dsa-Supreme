#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    TreeNode* left;
    TreeNode* right;
    int val;
    TreeNode(int data){
        this->val=data;
        left=NULL;
        right=NULL;
    }
};
class Solution {
public:
    void solve(TreeNode* root,int targetSum,int sum ,vector<vector<int>> &ans,vector<int> &path){
        if(root==NULL)
            return ;
        if(root->left==NULL&&root->right==NULL){
            path.push_back(root->val);
            sum+=root->val;
            if(sum==targetSum){
                ans.push_back(path);
            }
            sum-=root->val;
            path.pop_back();
        }
        path.push_back(root->val);
        sum+=root->val;
        solve(root->left,targetSum,sum,ans,path);
        solve(root->right,targetSum,sum,ans,path);
        path.pop_back();
        sum-=root->val;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> temp;
        int sum=0;
        solve(root,targetSum,sum,ans,temp);
        return ans;
    }
};