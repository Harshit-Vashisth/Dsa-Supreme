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

Node* buildtree(int arr[],int s,int e){
    if(s>e)
        return NULL;
    int mid=s+(e-s)/2;
    int ele=arr[mid];
    Node* root=new Node(ele);
    root->left=buildtree(arr,s,mid-1);
    root->right=buildtree(arr,mid+1,e);
}
int main(){
    int arr[]={10,20,30,40,50,60,70,80,90};
    Node* root=buildtree(arr,0,8);
    cout<<"Printing the tree"<<endl;
    traversal(root);
}