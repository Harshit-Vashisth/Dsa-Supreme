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
int length(Node* head){
    Node* temp=head;
    int len=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        len++;
    }
    return len;

}
void insertAtpos(Node* &head,Node* &tail,int val,int data){
    Node* newnode=new Node(data);
    if(head==NULL){
        head=newnode;
        tail=newnode;
    return ;
    }
   
    if(val==head->val){
        insertAthead(head,tail,val);
        return;
    }

     int i=1,pos=0;
     int len=length(head);
     cout<<len<<endl;
     Node* temp=head;
    while(i<=len){
        if(temp->val==val){
            pos=i;
            break;}
        i++;
        temp=temp->next;
    }

    if(pos==0||val==tail->val){
        insertAttail(head,tail,val);
        return;
    }
    Node* prev=NULL;
    Node* curr=head;
    while(curr->val!=val){
        prev=curr;
        curr=curr->next;
    }
    prev->next=newnode;
    newnode->next=curr;
}
void deletenode(Node* &head,Node* &tail,int val){
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


    Node* prev=head;
    int i=1;
    while(prev->val!=val)
    {
        prev=prev->next;
        i++;
    }
    Node* curr=prev->next;
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
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
    cout<<endl;

    cout<<length(head)<<endl;

    insertAtpos(head,tail,50,500);
    cout<<endl;
    print(head);
    insertAtpos(head,tail,40,150);
    cout<<endl;
    print(head);
    insertAtpos(head,tail,60,100);
    cout<<endl;
    print(head);
//     deletenode(head,tail,1);
//     cout<<endl;
//     print(head);
//     deletenode(head,tail,4);
//     cout<<endl;
//     print(head);
//     deletenode(head,tail,6);
//     cout<<endl;
//     print(head);
 }