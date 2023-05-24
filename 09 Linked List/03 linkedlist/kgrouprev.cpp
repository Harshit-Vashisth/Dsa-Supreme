#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node()
    {
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
int length(Node* head){
    Node* temp=head;
    int i=0;
    while(temp!=NULL){
        temp=temp->next;
        i++;
    }
    return i;
}
Node* reverseK(Node* &head,int k){
    if(head==NULL)
    return NULL;

    int len=length(head);
    if(k>len)
    return head;

    int count=0;

    Node* prev=NULL;
    Node* curr=head;
    Node* next=head->next;
    //reverse
    while(count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    //reverse ll
    if(next!=NULL)
        head->next=reverseK(next,k);
    //if me aya toh mtlb left me still linkedlist present h 
    
    return prev;
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
}
int main(){
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    Node* d=new Node(50);
    Node* e=new Node(60);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    head=reverseK(head,2);
    print(head);
}