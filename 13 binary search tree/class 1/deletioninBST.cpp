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
        root=new Node(data);
        return root;
    }
    if(root->data>data)
        root->left=insertBST(root->left,data);
    else
        root->right=insertBST(root->right,data);
    return root;
}
void takeInput(Node* &root){
    int data;
    cout<<"Enter the elements"<<endl;
    cin>>data;
    while(data!=-1){
       root= insertBST(root,data);
       cout<<"Enter the data"<<endl;
        cin>>data;
    }
}
void traversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        
        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
                q.push(NULL);
        }
        else{
            cout<<temp->data<<" ";
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
        }
    }
}

int maximum(Node* root){
    if(root==NULL)
    return -1;
    while(root->right)
        root=root->right;
    return root->data;
}

Node* deleteNode(Node* root,int data){
    if(root==NULL)
        return root;
    if(root->data==data){
        if(root->left==NULL&&root->right==NULL){
            delete root;
            return NULL;
        }
        else if(root->left!=NULL&&root->right==NULL){
                Node* child=root->left;
                delete root;
                return child;
        }
        else if(root->left==NULL&&root->right!=NULL){
                Node* child=root->right;
                delete root;
                return child;
        }
        else{
            root->data=maximum(root->left);
            deleteNode(root->left,root->data);
            return root;
        }
    }
    if(root->data>data)
        root->left= deleteNode(root->left,data);
    else
        root->right=deleteNode(root->right,data);
    return root;
}


int main(){
    Node* root=NULL;
    takeInput(root);
    cout<<"Printing the root";
    traversal(root);
    deleteNode(root,10);
    cout<<"Node after deletion" <<endl;
    traversal(root);
}