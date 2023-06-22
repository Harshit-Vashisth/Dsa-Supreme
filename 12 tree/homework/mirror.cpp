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
class Solution {
    public:
     bool isSameTree(Node* p, Node* q) {
        if(q==NULL&&p==NULL)
            return true;
        if(q==NULL || p==NULL)
            return false;
           if(q->data!=p->data)
                return false;
        return (isSameTree(p->left,q->right)&&isSameTree(p->right,q->left));
    }
    bool isSymmetric(Node* root) {
        if(root==NULL)
            return true;

        return isSameTree(root->left,root->right);

    }
};