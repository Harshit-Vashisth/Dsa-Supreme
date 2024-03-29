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
    stack<Node*> st;
    Node* curr=root;
    while(!st.empty()|| curr!=NULL){
        while(curr!=NULL){
            st.push(curr);
            curr=curr->left;
        }
        curr=st.top();
        st.pop();
        int temp=curr->data;
        
            curr=curr->right;
            cout<<temp;
    }
}
int main(){
    Node* root=NULL;
    root=buildtree();
    cout<<"Prev order start"<<endl;
    preorder(root);
}