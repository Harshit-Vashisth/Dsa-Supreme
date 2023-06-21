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
   root->left=buildtree();
   root->right=buildtree();
}
int main(){
    Node* root=NULL;
    root=buildtree();
}