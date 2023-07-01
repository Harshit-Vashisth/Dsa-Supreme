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

Node* deleteNode(Node* root,int data){
    if(root==NULL)
        return root;
    if(root->data==data){
        if(root->left==NULL&&root->right==NULL){
            delete root;
            return NULL;
        }
        else if(root->left==NULL&&root->right==NULL){
            
        }
    }
    if(root->data>data)
        return deleteNode(root->left,data);
    else
        return deleteNode(root->right,data);
}


int main(){
    Node* root=NULL;
    takeInput(root);
    cout<<"Printing the root";
    traversal(root);
    cout<<"Node after deletion" <<endl;
    traversal(root);
}