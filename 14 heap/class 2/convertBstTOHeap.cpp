#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
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
   cout<<"Enter the left value"<<endl;
   root->left=buildtree();
   cout<<"Enter the right value"<<endl;
   root->right=buildtree();
}

    void solve(Node* root,vector<int> &arr){
        if(root==NULL){
           return;
        }
        solve(root->left,arr);
        arr.push_back(root->data);
        solve(root->right,arr);
    }
    void link(Node* root,vector<int> &arr,int i){
        if(root==NULL){
           return;
        }
        solve(root->left,arr);
        solve(root->right,arr);
        root->data=arr[i];
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
int main(){
    Node* root=NULL;
    root=buildtree();
    vector<int> arr;
    solve(root,arr);
    link(root,arr,0);
    levelordertraversal(root);
    
    }