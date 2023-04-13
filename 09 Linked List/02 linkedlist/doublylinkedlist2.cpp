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
int length(Node* head){
    int len=1;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
}
void insertathead(Node* &head,Node* &tail,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void insertattail(Node* &head,Node* &tail,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->prev=tail;
    tail->next=newnode;
    tail=newnode;
}
void insertatpos(Node* &head,Node* &tail,int val){
    s
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    insertathead(head,tail,20);
    insertathead(head,tail,30);
    insertathead(head,tail,40);
    print(head);
    cout<<endl;
    insertattail(head,tail,50);
    insertattail(head,tail,60);
    insertattail(head,tail,70);
    print(head);
}
    