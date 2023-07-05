#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* insertBST(Node* root,int data){
    if(root==NULL){ 
        root=new Node(data);
        return root;
    }
    if(root->data>data)
        root->left=insertBST(root->left,data);
    else
        root->right=insertBST(root->right,data);
    return root;
}
void takeInput(Node* &root){
    int data;
    cout<<"Enter the elements"<<endl;
    cin>>data;
    while(data!=-1){
       root= insertBST(root,data);
       cout<<"Enter the data"<<endl;
        cin>>data;
    }
}
void traversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        
        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
                q.push(NULL);
        }
        else{
            cout<<temp->data<<" ";
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
        }
    }
}
 void convertBSTtoLL(Node* root,Node* &head){
        if(root==NULL)
        return;
        convertBSTtoLL(root->right,head);
        root->right=head;
        if(head!=NULL)
            head->left=root;
        head=root;
        convertBSTtoLL(root->left,head);
    }
int main(){
    Node* root=NULL;
    takeInput(root);
    cout<<"Printing the root \n";
    traversal(root);
    Node* head=NULL;
    //convertBSTtoLL(root,head);
    cout<<"After converting"<<endl;
    traversal(head);
}