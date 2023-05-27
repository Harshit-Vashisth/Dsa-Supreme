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
    int length(ListNode* head){
        int i=1;
        while(head->next!=NULL){
            i++;
            head=head->next;
        }
        return i;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)
        return NULL;
        if(head->next==NULL&&n==1)
        return NULL;
        int l=length(head);
        if(l==n)
        {
            head=head->next;
            return head;
        }
        l=l-n;
        int i=1;
        ListNode* curr=head;
        while(i<l){
            curr=curr->next;
            i++;
        }
        ListNode* temp=curr->next;
        curr->next=curr->next->next;
        temp->next=NULL;
        delete temp;
        return head;
    }
    
    void print(ListNode* head){
        while(head!=NULL){
            cout<<head->val<<" ";
            head=head->next;
        }
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
    cout<<endl;
    head =removeNthFromEnd(head,2);
    print(head);
}