#include <bits/stdc++.h>
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
bool kAncestor(Node* &root,Node* &q,int &k){
    if(root==NULL)
        return false;
    if(root->data==q->data)
        return true;
    
    bool leftans=kAncestor(root->left,q,k);
    bool rightans=kAncestor(root->right,q,k);

    if(leftans||rightans)
        k--;
    if(k==0){
        cout<<root->data<<endl;
        k=-1;
    }
    return (left||right);
}

int main(){
    Node* root;
    root=buildtree();
    levelordertraversal(root);
}
