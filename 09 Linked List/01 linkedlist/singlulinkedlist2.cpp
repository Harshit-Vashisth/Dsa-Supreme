#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(){
        val=0;
        next=NULL;
    }
    Node(int val){
        this->val=val;
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
void insertAthead(Node* &head,Node* &tail,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
    head=newnode;
    tail=newnode;
    return;}

    newnode->next=head;
    head=newnode;
}
void insertAttail(Node* &head,Node* &tail,int val){
     Node* newnode=new Node(val);
    if(head==NULL){
    head=newnode;
    //tail=newnode;
    return;}

    tail->next=newnode;
    tail=newnode;
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;    
   
    insertAthead(head,tail,30);
    insertAthead(head,tail,20);
    insertAthead(head,tail,10);
    cout<<endl;
    print(head);
    insertAttail(head,tail,40);
    insertAttail(head,tail,50);
    insertAttail(head,tail,60);
    insertAttail(head,tail,100);
    cout<<endl;
    print(head);
}