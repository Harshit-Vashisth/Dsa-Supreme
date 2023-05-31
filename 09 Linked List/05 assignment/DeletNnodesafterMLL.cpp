#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
   Node()
    {
        this->val=0;
        this->next=NULL;
    }
   Node(int data){
        this->val=data;
        this->next=NULL;
    }
};
void linkdelete(struct Node  *head, int M, int N)
    {
        if(!head)return ;
        
        Node* it=head;
       for(int i=0;i<M-1;i++){
            if(!it)return;
            it=it->next;
        }
        
        if(!it)return;
        
        Node* mt=it;
        it=mt->next;
        for(int i =0;i<N;i++){
            if(!it) break;
            Node* temp=it;
            it=it->next;
            temp->next=NULL;
            delete temp;
        }
        mt->next=it;
        linkdelete(it,M,N);
    }
    int main(){
        cout<<"Hejoekf"<<endl;
    }