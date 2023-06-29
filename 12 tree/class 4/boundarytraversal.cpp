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
Node* buildtree(){
    int data;
    cin>>data;
    if(data==-1)
        return NULL;
    Node* root=new Node(data);
    cout<<"LEFT\n";
    root->left=buildtree();
    cout<<"Right\n";
    root->right=buildtree();
}
void levelordertraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
}
class Solution {
public:
    void leftbound(Node* &root,vector<int> &ans){
        if(root==NULL)
            return;
        if(root->left==NULL&&root->right==NULL)
            return;         //yaha pr left stop hota to print extra
            
        ans.push_back(root->data);
        if(root->left)
        leftbound(root->left,ans);
        else
        leftbound(root->right,ans);
    }
    void leafbound(Node* &root,vector<int> &ans){
        if(root==NULL)
            return;
        if(root->left==NULL&&root->right==NULL)
           ans.push_back(root->data);         
            
        leafbound(root->left,ans);
        leafbound(root->right,ans);
    }
    void rightbound(Node* &root,vector<int> &ans){
        if(root==NULL)
            return;
        if(root->left==NULL&&root->right==NULL)
            return;
        
        if(root->right)
          rightbound(root->right,ans);
        else
            rightbound(root->left,ans);
      
        ans.push_back(root->data);  
    }
    vector <int> boundary(Node *root)
    {
        vector<int> ans;
        if(root==NULL)
        return ans;
        
        ans.push_back(root->data);
        if(root->left==NULL&&root->right==NULL)
        return ans;
        leftbound(root->left,ans);
        leafbound(root,ans);
        rightbound(root->right,ans);
        return ans;
    }
};
int main(){
    Node* root;
    root=buildtree();
    levelordertraversal(root);
    Node* q =new Node(50);
    int k=2;
    cout<<endl;
    vector<int> a=boundary(root);
}
