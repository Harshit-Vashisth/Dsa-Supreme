#include<bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode()
    {
        this->val=0;
        this->next=NULL;
    }
    ListNode(int data){
        this->val=data;
        this->next=NULL;
    }
};

    ListNode* middle(ListNode* &head){
        ListNode* fast=head->next;
        ListNode* slow=head;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                slow=slow->next;
                fast=fast->next;
            }
        }
        return slow;
    }
    ListNode* reverse(ListNode* &head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next=curr->next;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    void print(ListNode* head){
    ListNode* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        if(temp==NULL)
            return true;
        if(head->next==NULL)
            return true;
        
        //slowis pointing to the middle 
        ListNode* mid=middle(head);
        ListNode* temp1=head;
        ListNode* temp2=reverse(mid->next);
        print(temp1);
        print(temp2);
        while(temp2!=NULL){
            if(temp1->val!=temp2->val)
                return false;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return true;
    }

    
int main(){
    ListNode* head=new ListNode(10);
    ListNode* a=new ListNode(20);
    ListNode* b=new ListNode(30);
    ListNode* c=new ListNode(30);
    ListNode* d=new ListNode(20);
    ListNode* e=new ListNode(10);
    
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    print(head);
    cout<<isPalindrome(head);
}