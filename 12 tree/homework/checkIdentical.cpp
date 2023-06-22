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
bool isSameTree(Node* p, Node* q) {
        if(q==NULL&&p==NULL)
            return true;
        if(q==NULL&&p!=NULL)
            return false;
        if(q!=NULL &&p==NULL)
            return false;
        return ((q->data==p->data)&&isSameTree(p->left,q->left)&&isSameTree(p->right,q->right));
    }
    
int main(){
    Node* root=NULL;
    root=buildtree();
    cout<<"Prev order start"<<endl;
    cout<<isSameTree(root,root);
}