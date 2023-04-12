#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(){
        val=0;
        next=NULL;
        prev=NULL;
    }
    Node(int val){
        this->val=val;
        prev=NULL;
        next=NULL;
    }
};

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" -> ";
        temp=temp->next;
    }
}

int main(){
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    Node* d=new Node(50);
    
    head->next=a;
    a->prev=head;

    a->next=b;
    b->prev=a;

    b->next=c;
    c->prev=b;

    c->next=d;
    d->prev=c;
    
    print(head);
}
    
    