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
    return len;
}
void insertathead(Node* &head,Node* &tail,int val){
    Node* newnode=new Node(val);
    if(head==NULL)
    {
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
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}

void insertatpos(Node* &head,Node* &tail,int pos,int val){
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    if(pos==1){
        insertathead(head,tail,val);
        return;
    }
    int len=length(head);
    if(pos>len-1){
        insertattail(head,tail,val);
        return;
    }
    int i=1;
    Node* prev=head;
    while(i<pos-1){
        prev=prev->next;
        i++;
            }
    Node* curr=prev->next;
    prev->next=newnode;
    newnode->next=curr;
    curr->prev=newnode;
    newnode->prev=prev;
}
void deletenode(Node* &head,Node* &tail,int pos){
    if(head==NULL)
    {
        cout<<"Deletion not possible"<<endl;
        return;
    }
    if(head->next==NULL){
        Node* temp=head;
        head=NULL;
        tail=NULL;
        delete temp;
        return;
    }
    if(pos==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        head->prev=NULL;
        delete temp;
        return;
    }
    int len=length(head);
    if(pos>len){
    cout<<"Enter a valid value"<<endl;
    return;}
    if(pos==len){
        Node* temp=tail;
        tail=tail->prev;
        temp->prev=NULL;
        tail->next=NULL;
        delete temp; 
        return ;
        }
    int i=1;
    Node* left=head;
    while(i<pos-1){
        left=left->next;
        i++;
    }
    Node* curr=left->next;
    Node* right=curr->next;

    left->next=right;
    right->prev=left;
    curr->next=NULL;
    curr->prev=NULL;
    delete curr;
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
     cout<<endl;
    insertatpos(head,tail,1,10);
    insertatpos(head,tail,10,50);
    insertatpos(head,tail,4,4);
print(head);
cout<<endl;
deletenode(head,tail,1);
deletenode(head,tail,4);
deletenode(head,tail,5);
print(head);
cout<<endl;
    int len=length(head);
deletenode(head,tail,len);
print(head);
cout<<len;
}
    