 #include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* bottom;
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
Node* merge(Node* a,Node* b){
        if(a==NULL) return b;
        if(b==NULL) return a;

        Node* ans=NULL;
        if(a->data<=b->data){
            ans=a;
            a->bottom=merge(a->bottom,b);
        }
        else
        {
             ans=b;
            b->bottom=merge(a,b->bottom);
        }
        return ans;
    }
Node *flatten(Node *head)
{
    if(!head)
            return NULL;
            Node* mergeLL=merge(head,flatten(head->next));
            return mergeLL;
   // Your code here
}
int main(){
    cout<<"helo";
}