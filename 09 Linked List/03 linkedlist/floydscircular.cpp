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
Node* detect(Node* head){
    if(head==NULL)
    return NULL;
    Node* fast=head;
    Node* slow=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
        if(fast==slow)
         return slow;
    }
    return NULL;
}

Node* circular(Node* &head){
    if(head==NULL)
    return NULL;
    if(head->next==head)
    return head;
    Node* temp=detect(head);
    Node* slow=head;
    Node* fast=temp;
    Node* prev=fast;
    while(slow!=fast){
        prev=fast;
        slow=slow->next;
        fast=fast->next;
    }
    prev->next=NULL;
    return head;
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
    Node* f=new Node(70);
    Node* g=new Node(80);
    Node* h=new Node(90);
    Node* i=new Node(100);
    Node* j=new Node(110);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;
    g->next=h;
    h->next=i;
    i->next=j;
    j->next=e;
    head=circular(head);
    print(head);
}