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
void printlevelwise(Node* root){
     queue<Node*> q;
     q.push(root);
     q.push(NULL);
     while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty())
                q.push(NULL);
        }
        else{
            cout<<temp->data<<"  ";
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }

     }

}
int main(){
    Node* root=NULL;
    root=buildtree();
    printlevelwise(root);
}