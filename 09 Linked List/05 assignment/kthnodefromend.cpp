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

 void kthnode(ListNode* head,int &k,int &ans) {
        if(head==NULL)
            return;
       kthnode(head->next,k,ans);
       k--;
       if(k==0)
       {
        ans=head->val;
        return;
       }
       
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
    int ans=0;
    int k=2;
    kthnode(head,k,ans);
    cout<<ans;
}