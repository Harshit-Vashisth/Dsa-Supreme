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

    pair<bool,int> solve(Node* root){
        if(root==NULL){
            pair<bool,int> p=make_pair(true,INT_MIN);
            return p;
        }
        if(root->left==NULL&&root->right==NULL){
            pair<bool,int> p=make_pair(true,root->data);
            return p;
        }
         pair<bool,int> leftpair=solve(root->left);
         pair<bool,int> rightpair=solve(root->right);
         if(leftpair.first==true &&
                rightpair.first==true
                && root->data>leftpair.second
                && root->data>rightpair.second){
            pair<bool,int> p=make_pair(true,root->data);
            return p;
         }
         else{
             pair<bool,int> p=make_pair(false,-1);
            return p;
         }
    }

int main(){
    Node* root=NULL;
    root=buildtree();
    cout<<"Answer is "<<solve(root).first;
    }