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
        next=NULL;
        prev=NULL;
    }
};

void print(Node* head){
    Node* temp=head;
    do{
        cout<<temp->val<<" -> ";
        temp=temp->next;
    }while(temp!=head);
}


void insertAthead(Node* &head,int val){
    
    Node* newnode=new Node(val);
    if(head==NULL){
    head=newnode;
    head->next=head;
    head->prev=head;
    return;}
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void insertAtpos(Node* &head,int pos,int val){
    Node* newnode=new Node();
    if(head==NULL){
        head=newnode;
        head->next=head;
        head->prev=head;
    }
}