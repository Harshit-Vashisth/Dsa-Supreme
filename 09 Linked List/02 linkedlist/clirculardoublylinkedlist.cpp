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
void insertAttail(Node* &head,int val){
     Node* newnode=new Node(val);
    if(head==NULL){
    head=newnode;
    head->next=head;
    head->prev=head;
    return;}
    Node* tail=head;
while(tail->next!=head){
    tail=tail->next;
}
    tail->next=newnode;
    newnode->prev=NULL;
    newnode->next=head;
    head->prev=newnode;
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
void insertAtpos(Node* &head,int pos,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        head->next=head;
        head->prev=head;
    return ;
    }
    if(pos==1){
        insertAthead(head,val);
        return;
    }
    int len=length(head);
    if(pos>=len-1){
        insertAttail(head,val);
        return;
    }
    Node* prev=head;
    int i=1;
    while(i<pos-1&&prev->next!=head){
        prev=prev->next;
        i++;
    }
    Node* curr=prev->next;
    prev->next=newnode;
    newnode->prev=prev;
    newnode->next=curr;
    curr->prev=newnode;
}
void deletenode(Node* &head,int pos){
    if(head==NULL){
        cout<<"Deletion not possible";
        return;}
    if(pos==1)
    {
        Node* temp=head;
        Node* tail=head;
        while(tail->next->next!=head)
        tail=tail->next;
        head=head->next;
        tail->next=head;
        head->prev=tail;
        temp->next=NULL;
        delete temp;
    }
    int len=length(head);
    if(pos==len)
    {
        Node* prev=head;
        while(prev->next->next!=head){
            prev=prev->next;
        }
        Node* temp=prev->next;
        prev->next=head;
        head->prev=prev;
        temp->next=NULL; 
        delete temp;
        return ;
    }
    Node* prev=head;
    int i=1;
    while(i<pos-1)
    {
        prev=prev->next;
        i++;
    }
    Node* curr=prev->next;
    prev->next=curr->next;
    curr->next->prev=prev;
    curr->next=NULL;
    delete curr;
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;    
   
    insertAthead(head,30);
    insertAthead(head,20);
    insertAthead(head,10);
    print(head);
    insertAttail(head,40);
    insertAttail(head,50);
    insertAttail(head,60);
    insertAttail(head,100);
    cout<<endl;
    print(head);
    cout<<endl;

    cout<<length(head);

    insertAtpos(head,4,500);
    cout<<endl;
    print(head);
    insertAtpos(head,1,500);
    cout<<endl;
    print(head);
    insertAtpos(head,10,500);
    cout<<"harsh"<<endl;
    print(head);
    deletenode(head,1);
    cout<<endl;
    print(head);
    deletenode(head,4);
    cout<<endl;
    print(head);
    deletenode(head,6);
    cout<<endl;
    print(head);
}