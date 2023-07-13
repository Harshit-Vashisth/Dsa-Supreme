#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        data=d;
        next=NULL;
    }
};
    void search(Node* &root){
       unordered_map<Node*,int> mp;
       Node* temp=root;
        while(temp){
            if(mp[temp]==1){
                cout<<"Found"<<endl;
                break;
            }
            mp[temp]=1;
            temp=temp->next;
        }
        if(temp==NULL)
        cout<<"Not found";
    }
int main(){
    Node* root=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    Node* d=new Node(50);
    Node* e=new Node(60);
    root->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=root;
    search(root);
}