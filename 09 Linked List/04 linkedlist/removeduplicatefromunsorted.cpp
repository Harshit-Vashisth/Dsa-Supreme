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

 ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return NULL;
        if(head->next==NULL)
            return head;
        map<int,bool> mp;
        ListNode* curr=head;
        while(curr!=NULL){
            mp[curr->val]=false;
            curr=curr->next;
        }
        for(auto i : mp)
            cout<<i.first<<"  "<<i.second<<endl;
        curr=head->next; 
        cout<<endl;
        ListNode* prev=head;
        ListNode* next;
        mp[prev->val]=true;
        while(curr!=NULL){
            if((curr->next!=NULL)&&(mp[curr->val]==true))
            {
                next=curr->next;
                ListNode* temp=curr;
                temp->next=NULL;
                prev->next=next;
                curr=next;
                delete temp;
            }
            else
            {
                mp[curr->val]=true;
                prev=curr;
                curr=curr->next;
            }
        }
         for(auto i : mp)
            cout<<i.first<<"  "<<i.second<<endl;
        return head;
    }

void print(ListNode* head){
    ListNode* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
    
int main(){
    ListNode* head=new ListNode(10);
    ListNode* a=new ListNode(20);
    ListNode* b=new ListNode(10);
    ListNode* c=new ListNode(30);
    ListNode* d=new ListNode(20);
    ListNode* e=new ListNode(40);
    
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    print(head);
    head =deleteDuplicates(head);
    print(head);
}