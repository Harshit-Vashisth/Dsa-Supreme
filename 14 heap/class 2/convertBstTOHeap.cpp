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

    void solve(Node* root,vector<int> &arr){
        if(root==NULL){
           return;
        }
        solve(root->left,arr);
        arr.push_back(root->data);
        solve(root->right,arr);
    }
    void link(Node* &root,vector<int> &arr,int &i){
        if(root==NULL){
           return;
        }
        link(root->left,arr,i);
        link(root->right,arr,i);
        root->data=arr[i++];
    }

void levelordertraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
}
int main(){
    Node* root=NULL;
    takeInput(root);
    levelordertraversal(root);
    vector<int> arr;

    solve(root,arr);
    int i=0;
    link(root,arr,i);
    
    cout<<endl;
    levelordertraversal(root);
    }