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
    ListNode(int val){
        this->val=val;
        this->next=NULL;
    }
};

ListNode* reverse(ListNode* head){
    if(head==NULL)
        return NULL;
    if(head->next==NULL)
        return head;
    ListNode* prev=NULL;
    ListNode* curr=head;
    ListNode* next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

    ListNode* addTwoNumbers(ListNode* head1, ListNode* head2) {
        if(head1==NULL)
            return head2;
        if(head2==NULL)
            return head1;
        head1=reverse(head1);
        head2=reverse(head2);
        ListNode* anshead=NULL;
        ListNode* anstail=NULL;
        int carry=0;
        while( head1!=NULL&&head2!=NULL){
            int sum=head1->val+head2->val+carry;
            int digit=sum%10;
            ListNode* temp=new ListNode(digit);
            carry=sum/10;
            if(anshead==NULL){
                anshead=temp;
                anstail=temp;
            }
            else{ 
                anstail->next=temp;
                anstail=temp;
                }
            head1=head1->next;
            head2=head2->next;
        }
        while(head1!=NULL){
            int sum=head1->val+carry;
            int digit=sum%10;
            ListNode* temp=new ListNode(digit);
            carry=sum/10;
            if(anshead==NULL){
                anshead=temp;
                anstail=temp;
            }
            else{ 
                anstail->next=temp;
                anstail=temp;
                }
            head1=head1->next;
        }
        while(head2!=NULL){
            int sum=head2->val+carry;
            int digit=sum%10;
            ListNode* temp=new ListNode(digit);
            carry=sum/10;
            if(anshead==NULL){
                anshead=temp;
                anstail=temp;
            }
            else{ 
                anstail->next=temp;
                anstail=temp;
                }
            head2=head2->next;
        }
        while(carry!=0){
            ListNode* temp=new ListNode(carry);
            anstail->next=temp;
            carry=carry/10;
        }
       anshead=reverse(anshead);
        return anshead;
    }
    void print(ListNode* head){
        while(head!=NULL){
            cout<<head->val<<" ";
            head=head->next;
        }
    }
int main(){
    ListNode* head1=new ListNode(1);
    ListNode* a=new ListNode(1);
    ListNode* b=new ListNode(2);
   
    head1->next=a;
    a->next=b;
    
     ListNode* head2=new ListNode(9);
    ListNode* c=new ListNode(1);
    ListNode* d=new ListNode(2);
    head2->next=c;
    c->next=d;
    ListNode* temp=addTwoNumbers(head1,head2);
    print(temp);
}