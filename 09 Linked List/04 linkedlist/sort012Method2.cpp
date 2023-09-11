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
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
Node* sort(Node* head){
    if(head==NULL)
    return NULL;
    if(head->next==head)
    return head;

   Node* zerohead=new Node(-1);
   Node* zerotail=zerohead;

   Node* onehead=new Node(-1);
   Node* onetail=onehead;

   Node* twohead=new Node(-1);
   Node* twotail=twohead;

   Node* curr=head;
   while(curr!=NULL){
    if(curr->data==0){
        Node* temp=curr;
        curr=curr->next;
        temp->next=NULL;
        zerotail->next=temp;
        zerotail=temp;
    }
    
    
    else if(curr->data==1)
    {
        Node* temp=curr;
        curr=curr->next;
        temp->next=NULL;
        onetail->next=temp;
        onetail=temp;
    }
    else if(curr->data==2)
    {
        Node* temp=curr;
        curr=curr->next;
        temp->next=NULL;
        twotail->next=temp;
        twotail=temp;
    }
   }
    Node* temp=onehead;
    onehead=onehead->next;
    temp->next=NULL;
    delete temp;

     temp=twohead;
    twohead=twohead->next;
    temp->next=NULL;
    delete temp;

   if(onehead!=NULL){
    zerotail->next=onehead;
    onetail->next=twohead;
   }
   else{
    onetail->next=twohead;
   } 
   temp=zerohead;
    zerohead=zerohead->next;
    temp->next=NULL;
    delete temp;
    return zerohead;
}
int main(){
    Node* head=new Node(0);
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(0);
    Node* d=new Node(1);
    Node* e=new Node(1);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    head=sort(head);
    print(head);
}