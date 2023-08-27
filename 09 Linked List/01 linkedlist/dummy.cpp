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
    tail=newnode;
}
int findlen(Node* head){
    int i=0;
    while(head!=NULL){
        head=head->next;
        i++;
    }
    return i;
}
void insertAtpos(Node* &head,Node* &tail,int data,int pos){
    Node* newnode=new Node(data);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    if(pos==1){
        insertAthead(head,tail,data);
        return ;
    }
    int len=findlen(head);
    if(pos==len){
        insertAttail(head,tail,data);
    }
    Node* temp=head;
    while(pos>1){
        temp=temp->next;
        pos--;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void deletion(int pos,Node* &head,Node* &tail){
    if(head==NULL){
        cout<<"can't delete "<<endl;
        return;
    }
    if(pos==1){ 
        // write a destructor to delte a node 
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    int len=findlen(head);
    if(pos==len){
        // step1 find prev 
        int i=1;
        Node* prev=head;
        while(i<pos-1){
            prev=prev->next;
            i++;
        }
        // step3
        prev->next=NULL;
        Node* temp=tail;
        tail=prev;
        delete temp;
        return;
    }
    int i=1;
        Node* prev=head;
        
        while(i<pos-1){
            prev=prev->next;
            i++;
        }
        // step3
        Node* temp=prev->next;
        prev->next=prev->next->next;
        temp->next=NULL;
        delete temp;
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
    cout<<endl;
    cout<<findlen(head)<<endl;
    deletion(7,head,tail);
    print(head);
}