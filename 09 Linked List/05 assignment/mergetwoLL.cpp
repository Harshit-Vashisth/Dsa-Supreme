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
    ListNode* mergeTwoLists(ListNode* left, ListNode* right) {
        if(left==NULL)
            return right;
        if(right==NULL)
            return left;
        ListNode* ans=new ListNode(-1);
        ListNode* mptr=ans;
        while(left&&right){
            if(left->val<=right->val){
                mptr->next=left;
                mptr=left;
                left=left->next;
            }
            else
            {
                mptr->next=right;
                mptr=right;
                right=right->next;
            }
        }
        if(left){
            mptr->next=left;
        }
        if(right){
            mptr->next=right;
        }
        return ans->next;
    }
    void print(ListNode* head){
        while(head!=NULL){
            cout<<head->val<<" ";
            head=head->next;
        }
    }
int main(){
    ListNode* head1=new ListNode(1);
    ListNode* a=new ListNode(10);
    ListNode* b=new ListNode(22);
   
    head1->next=a;
    a->next=b;
    
     ListNode* head2=new ListNode(9);
    ListNode* c=new ListNode(11);
    ListNode* d=new ListNode(21);
    head2->next=c;
    c->next=d;
    ListNode* temp=mergeTwoLists(head1,head2);
    print(temp);
}