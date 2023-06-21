#include<bits/stdc++.h>
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
void inorder(Node* root){
   if(root==NULL)
    return;
    inorder(root->left);
    inorder(root->right);
    cout<<root->data<<" ";
}
int height(Node* root){
    if(root==NULL)
        return 0;
        int leftN=height(root->left);
        int rightN=height(root->right);
        return max(leftN,rightN)+1;
}
int main(){
    Node* root=NULL;
    root=buildtree();
    inorder(root);
    cout<<height(root);
}