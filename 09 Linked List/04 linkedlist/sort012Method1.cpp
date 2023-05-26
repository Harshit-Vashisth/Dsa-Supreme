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
Node* sort(Node* &head){
   
  int zero=0,one=0,two=0;
  Node* temp=head;
  while(temp!=NULL){
    if(temp->data==0)
    zero++;
    else if(temp->data==1)
    one++;
    else 
    two++;
    temp=temp->next;
  }
  temp=head;
  while(zero--){
        temp->data=0;
   temp=temp->next;
  }
  while(one--){
     temp->data=1;
   temp=temp->next;
  }
  while(two--){
     temp->data=2;
   temp=temp->next;
  }
  return head;
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