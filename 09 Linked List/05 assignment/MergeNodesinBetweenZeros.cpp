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
    ListNode* mergeNodes(ListNode* head) {
        if(!head) return NULL;

        ListNode* slow=head;
        ListNode* fast=head->next;
        ListNode* last=NULL;
        int sum=0;
        while(fast){
            if(fast->val!=0)
                sum+=fast->val;
            else{
                slow->val=sum;
                last=slow;
                slow=slow->next;
                sum=0;
            }
            fast=fast->next;
        }
        ListNode* temp=last->next;
        last->next=NULL;
        while(temp){
            ListNode* nxt=temp;
            temp=temp->next;
            nxt->next=NULL;
            delete nxt;
        }
        return head;
    }
    int main(){
        
    }