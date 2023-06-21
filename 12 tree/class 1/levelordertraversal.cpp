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
void levelordertraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(root->left)
            q.push(root->left);
        if(root->right)
            q.push(root->right);
        
    }
}
int main(){
    Node* root=NULL;
    root=buildtree();
    levelordertraversal(root);
}