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
        minval=min;
        maxval=max;
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
    Nodedata* currNode=new Nodedata();
    currNode->size=leftnode->size+rightnode->size+1;
    currNode->minval=min(root->data,leftnode->minval);
    currNode->maxval=max(root->data,rightnode->maxval);
    
    if(leftnode->valid&&rightnode->valid&& (root->data>leftnode->maxval )&& root->data<rightnode->minval){
        currNode->valid=true;
    }
    else
    currNode->valid=false;
    if(currNode->valid)
    ans=max(ans,currNode->size);
    return currNode;
}
int main(){
   Node* root = new Node(50);
		Node* first = new Node(30);
		Node* second = new Node(60);
		Node* third = new Node(5);
		Node* fourth = new Node(20);
		Node* fifth = new Node(45);
		Node* sixth = new Node(70);
		Node* seventh = new Node(65);
		Node* eight = new Node(80);

		root->left = first;
		root->right = second;
		first->left = third;
		first -> right = fourth;
		second->left = fifth;
		second->right = sixth;
		sixth->left = seventh;
		sixth->right= eight;



	
	  cout << "Printing the tree" << endl;
	  traversal(root);


	  int ans = 0;
	  LargestBst(root,ans);
	  cout << "Largest BST ka Size:  "<< ans << endl;
		  

}