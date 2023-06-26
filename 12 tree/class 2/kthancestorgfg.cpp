#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node* left;
    Node* right;
    int data;
    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
bool solve(Node* &root,int &q,int &k,vector<int> v,int &ans){
    if(root==NULL)
        return false;
    if(root->data==q)
        {
            while(!v.empty()&&k--)
            v.pop_back();
            if(!v.empty())
            ans=v.back();
            return true;
        }
    v.push_back(root->data);
    bool leftans=solve(root->left,q,k,v,ans);
    bool rightans=solve(root->right,q,k,v,ans);

    return (leftans||rightans);
}
int kthAncestor(Node *root, int k, int node)
{
    vector<int> v;
    int ans=-1;
    k--;
    bool sol=solve(root,node,k,v,ans);
    return ans;

}