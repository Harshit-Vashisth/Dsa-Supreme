#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node()
    {
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
Node* middle(Node* head){
        Node* fast=head;
    Node* slow=head;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                slow=slow->next;
                fast=fast->next;
            }
        }
        return slow;
    }
    Node* reverse(Node* head){
        Node* prev=NULL;
        Node* curr=head;
        Node* next=curr->next;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

    bool isPalindrome(Node* head) {
        Node* temp=head;
        if(temp!=NULL) 
            return true;
        if(head->next==NULL)
            return true;
         print(head);
        //slowis pointing to the middle 
        Node* mid=middle(head);
         print(mid);
        Node* temp1=head;
        Node* temp2=reverse(mid->next);
        print(temp1);
        print(temp2);
        while(temp2!=NULL){
            if(temp1->data!=temp2->data)
                return false;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return true;
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
    
    cout<<isPalindrome(head);
}