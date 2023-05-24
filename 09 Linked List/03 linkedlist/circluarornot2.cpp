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
bool circular(Node* head){
    if(head==NULL)
    return false;
    if(head->next=head)
    return true;

    Node* temp=head;
    while(temp->next!=head||temp!=NULL){
        temp=temp->next;
    }
   if(temp->next==head)
   return true;
   return false;
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
    e->next=head;
    cout<<circular(head);
}