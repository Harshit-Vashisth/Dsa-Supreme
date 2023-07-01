#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* insertBST(Node* root,int data){
    if(root==NULL){ 
        root->data=data;
        return root;
    }
    if(root->data>data)
        root->left=insertBST(root->left,data);
    else
        root->right=insertBST(root->right,data);
    return root;
}
void takeInput(Node* root){
    int data;
    cin>>data;
    if(data!=-1){
       root= insertBST(root,data);
        cin>>data;
    }
}
