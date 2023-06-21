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
    int height(Node* root) {
        if(root==NULL)
            return 0;
        int l=height(root->left);
        int r=height(root->right);
       return max(l,r)+1;
    }
    int diameterOfBinaryTree(Node* root) {
        if(root==NULL)
            return 0;
        int o1=diameterOfBinaryTree(root->left);
        int o2=diameterOfBinaryTree(root->right);
        int o3=height(root->left)+height(root->right);
        return max(o1,max(o2,o3));
    }

int main(){
    Node* root=NULL;
    root=buildtree();
    inorder(root);
    cout<<endl<<diameterOfBinaryTree(root);
}