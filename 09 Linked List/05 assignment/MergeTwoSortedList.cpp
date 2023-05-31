 #include<bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode* random;
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
class Solution {
public:
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
};