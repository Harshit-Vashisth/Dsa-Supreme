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

int sumtree(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftans=sumtree(root->left);
    int rightans=sumtree(root->right);

    root->data=root->data+leftans+rightans;
    return root->data;
}
int main(){
    Node* root;
    root=buildtree();
    levelordertraversal(root);
    sumtree(root);
    cout<<endl;
    levelordertraversal(root);
}