
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
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    insertatHead(head,tail,30);
    insertatHead(head,tail,20);
    insertatHead(head,tail,10);
    insertattail(head,tail,40);
    insertattail(head,tail,50);
    insertattail(head,tail,60);
    print(head);
}