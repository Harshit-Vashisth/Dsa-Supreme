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
void preorder(Node* root){
    deque<Node*> dq;
    dq.push_back(root);
    while(!dq.empty()){
        if(root->left)
            dq.push_back(root->left);
        cout<<dq.front()<<" ";
        dq.pop_front();
        if(root->right)
            dq.push_back(root->right);
    }
}
int main(){
    Node* root=NULL;
    root=buildtree();
    preorder(root);
}