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
    Node* head=new Node(30);
    Node* tail=head;    
    Node* a=new Node(40);
    Node* b=new Node(50);
    Node* c=new Node(60);
    Node* d=new Node(70);
    Node* e=new Node(80);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    print(head);
    insertAthead(head,tail,20);
    cout<<endl;
    print(head);
    insertAttail(head,tail,100);
    cout<<endl;
    print(head);

}