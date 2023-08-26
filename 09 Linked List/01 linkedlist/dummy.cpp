#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node* next;
    int data;
    Node(){
        data=0;
        next=NULL; 
    }
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
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
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    print(head);
    
}