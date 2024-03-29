#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node* next;
    Node* prev;
    int data;
    Node(){
        data=0;
        next=NULL; 
        prev=NULL; 
    }
    Node(int data){
        this->data=data;
        next=NULL;
        prev=NULL;
    }
};
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
}
void insertAthead(Node* &head,Node* &tail,int data){
    //i want to insert a node at the head of ll
    //by ref we dont want to return or we want to change in orignal
    Node* newnode=new Node(data);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void insertAttail(Node* &head,Node* &tail,int data){
    Node* newnode=new Node(data);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void insertAtpos(Node* &head,Node* &tail,int data,int pos){
    Node* newnode=new Node(data);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    if(pos==1)
        insertAthead(head,tail,data);
    Node* temp=head;
    while(pos>1){
        temp=temp->next;
        pos--;
    }
    newnode->next=temp->next;
    temp->next->prev=newnode;
    temp->next=newnode;
    newnode->prev=temp;
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    insertAthead(head,tail,20); 
    insertAthead(head,tail,30);
    insertAthead(head,tail,50);
    insertAthead(head,tail,40);
    insertAttail(head,tail,60);
    print(head);
    cout<<endl;
    insertAtpos(head,tail,100,3);
    insertAtpos(head,tail,90,4);
    print(head);
}