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

void insertAtend(Node* &head,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        head->next=head;
        head->prev=head;
        return;
    }
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
    newnode->next=head;
    head->prev=newnode;
}

int length(Node* head){
    int i =0;
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
        i++;
    }
}

void insertAtpos(Node* &head,int pos,int val){
    Node* newnode=new Node();
    if(head==NULL){
        head=newnode;
        head->next=head;
        head->prev=head;
        return;
    }
    if(pos==1)
    {
        insertAthead(head,val);
        return;
    }
    int len=length(head);
    if(pos==len){
        insertAtend(head,val);
    }

}