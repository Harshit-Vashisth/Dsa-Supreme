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
int main(){
    Node* root=NULL;
    root=buildtree();
    inorder(root);
}