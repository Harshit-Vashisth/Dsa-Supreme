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

    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans={-1,-1};
        ListNode* prev=head;
        if(!prev) return ans;
        ListNode* curr=prev->next;
        if(!curr) return ans;
        ListNode* next=curr->next;
        if(!next) return ans;

        int first=-1;
        int last=-1;
        int mind=INT_MAX;
        int i=1;
        while(next){
            bool iscp=((curr->val>prev->val && curr->val>next->val)||(curr->val<prev->val&&curr->val<next->val))?true:false;
            if(iscp&&first==-1){
                first=i;
                last=i;
            }
            else if(iscp){
                mind=min(mind,i-last);
                last=i;
            }
            i++;
            prev=curr;
            curr=next;
            next=next->next;
        }
        if(first==last)
         return ans;
         else
         {
             ans[0]=mind;
             ans[1]=last-first;
         }
         return ans;
    }

int main(){
    
}