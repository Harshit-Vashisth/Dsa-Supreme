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
void insertAthead(Node* &head,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
    head=newnode;
    head->next=head;
    return;}
    Node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
    head=newnode;
}
void insertAttail(Node* &head,int val){
     Node* newnode=new Node(val);
    if(head==NULL){
    head=newnode;
    head->next=head;
    return;}
    Node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
}
int length(Node* head){
    Node* temp=head;
    int len=0;
    while(temp->next!=head)
    {
        temp=temp->next;
        len++;
    }
    return len;

}
void insertAtpos(Node* &head,int pos,int data){
    Node* newnode=new Node(data);
    if(head==NULL){
        head=newnode;
        head->next=head;
    return ;
    }
   
    if(pos==1){
        insertAthead(head,data);
        return;
    }
    
    int len=length(head);
   if(pos>=len-1){
    insertAttail(head,data);
   }
   Node* prev=head;
   int i=1;
   while(i!=pos-1){
    prev=prev->next;
    i++;
   }
   Node* curr=prev->next;
   prev->next=newnode;
   newnode->next=curr;
}
void deletenode(Node* &head,int val){/////
    if(head==NULL){
        cout<<"Deletion not possible";
        return;}
    if(val==head->val)
    {
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    int len=length(head);
    if(val==tail->val)
    {
        int i=1;
        Node* prev=head;
        while(prev->val!=val){
            prev=prev->next;
        }
        prev->next=NULL;
        Node* temp=tail;
        tail=prev;
        delete temp;
        return ;
    }


    Node* prev=NULL;
    Node* curr=head;
    int i=1;
    while(curr->val!=val)
    {
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
}
int main(){
    Node* head=NULL;   
   
    insertAthead(head,30);
    insertAthead(head,20);
    insertAthead(head,10);
    cout<<endl;
    print(head);
    insertAttail(head,40);
    insertAttail(head,50);
    insertAttail(head,60);
    insertAttail(head,100);
    cout<<endl;
    print(head);
    cout<<endl;

    cout<<length(head)<<endl;

    insertAtpos(head,1,500);
    cout<<endl;
    print(head);
    insertAtpos(head,3,150);
    cout<<endl;
    print(head);
    insertAtpos(head,4,100);
    cout<<endl;
    print(head);
    deletenode(head,tail,50);
    cout<<endl;
    print(head);
    deletenode(head,tail,500);
    cout<<endl;
    print(head);
    // deletenode(head,tail,6);
    // cout<<endl;
    // print(head);
 }