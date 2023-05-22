#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(){
        this->data=0;
        this->next=NULL;
        this->prev=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
}
int getLength(Node* head){
    Node* temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
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
        a->next=b;
        b->next=c;
        c->next=d;
        d->prev=c;
        c->prev=b;
        b->prev=a;
        a->prev=head;
        

        print(head);

        }