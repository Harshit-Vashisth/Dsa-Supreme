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
class Nodedata{
    public:
    int size,minval,maxval;
    bool valid;
    Nodedata(){

    }
    Nodedata(int size,int min,int max,bool valid){
        this->size=size;
        this->minval=min;
        this->maxval=max;
        this->valid=valid;
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

void printLinkedList(Node* head) {
	Node* temp = head;
    cout << endl;
	while(temp != NULL ) {
		cout << temp -> data << " ";
		temp = temp -> right;
	}
	cout << endl;
}

Node* DoublyToLL(Node* &head,int n){
    if(n<=0||head==NULL)
        return NULL;
    Node* lefttree=DoublyToLL(head,n/2);
    Node* root=head;
    head=head->right;
    root->left=lefttree;
    root->right=DoublyToLL(head,(n/2-1));
    return root;
}
Nodedata * LargestBst(Node* root,int &ans){
    if(root== NULL){
        Nodedata* temp=new Nodedata(0,INT_MAX,INT_MIN,true);
        return temp;
    }
    Nodedata* leftnode=LargestBst(root->left,ans);
    Nodedata* rightnode=LargestBst(root->right,ans);
    Nodedata* currNode;
    currNode->size=leftnode->size+rightnode->size+1;
    currNode->minval=min(root->data,leftnode->minval);
    
    if(leftnode->valid&&rightnode->valid&&  root->data>leftnode->maxval &&   root->data<rightnode->minval){
        currNode->valid=true;
    }
    else
    currNode->valid=false;
    if(currNode->valid)
    ans=max(ans,currNode->size);
    return currNode;
}
int main(){
    Node* root=NULL;
    takeInput(root);
    cout<<"Printing the root \n";
    traversal(root);
  int ans=0;
  Nodedata* temp=LargestBst(root,ans);
  cout<<"\n The ans is "<<ans;
}