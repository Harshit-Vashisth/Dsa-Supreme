
    #include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(){
        data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertatHead(Node* &head,Node* &tail,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head=newnode;
}
void insertattail(Node* &head,Node* &tail,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        //tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void print(Node* head){
    Node* temp=head;
   
    while(temp->next!=NULL)
    {
        cout<<temp->data<<"-> ";
        temp=temp->next;
    }
}
int length(Node* head){
    Node* temp=head;
    int i =0;
    while(temp!=NULL){
        i++;
        temp=temp->next;
    }
    return i;
}
void insertatpos(Node* &head,Node* &tail,int pos,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return; 
    }
    if(pos==1)
    {
        insertatHead(head,tail,val);
        return;
    }
    int len=length(head);
    if(pos>=len-1)
    {
        insertattail(head,tail,val);
        return;
    }
    int i =1;
    Node* prev=head;
    while(i<pos-1){
        prev=prev->next;
        i++;
    }
    Node* curr=prev->next;
    prev->next=newnode;
    newnode->next=curr;
}
void deletepos(Node* &head,Node* &tail,int pos){
    Node* temp=head;
    if(head==NULL)
    return ;
    if(pos==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    int len=length(head);
    if(pos==len){
        Node* prev=head;
        while(prev->next!=tail){
            prev=prev->next;
        }
        prev->next=NULL;
        Node* temp=tail;
        delete temp;
        tail=prev;
        return;
    }
    int i =1;
    Node* prev=head;
    while(i<pos-1){
        prev=prev->next;i++;
    }
    Node* curr=prev->next;
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    insertatHead(head,tail,30);
    insertatHead(head,tail,20);
    insertatHead(head,tail,10);
    insertattail(head,tail,40);
    insertattail(head,tail,50);
    insertattail(head,tail,60);
    insertatpos(head,tail,4,70);
    insertatpos(head,tail,2,90);
    print(head);
    deletepos(head,tail,1);
    cout<<endl;
    print(head);
    deletepos(head,tail,5);
    cout<<endl;
    print(head);
    deletepos(head,tail,4);
    cout<<endl;
    print(head);
    deletepos(head,tail,4);
    cout<<endl;
    print(head);
}