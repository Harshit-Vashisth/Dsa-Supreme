#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node* left;
    Node* right;
    int data;
    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
Node* buildtree(){
    int data;
    cin>>data;
    if(data==-1)
        return NULL;
    Node* root=new Node(data);
    cout<<"LEFT\n";
    root->left=buildtree();
    cout<<"Right\n";
    root->right=buildtree();
}
void levelordertraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
}
bool kAncestor(Node* &root,Node* &q,int &k){
    if(root==NULL)
        return false;
    if(root->data==q->data)
        return true;
    
    bool leftans=kAncestor(root->left,q,k);
    bool rightans=kAncestor(root->right,q,k);

    if(leftans||rightans)
        k--;
    if(k==0){
        cout<<root->data<<endl;
        k=-1;
    }
    return (left||right);
}
vector<int> topView(Node *root)
    {
          vector<int> ans;
        if(root==NULL)
            return ans;
        map<int,int> mp;
        queue<pair<Node*,int>> q;
        q.push(make_pair(root,0));
        while(!q.empty()){
            pair<Node*,int> temp=q.front();
            q.pop();
            Node* frontnode=temp.first;
            int hd=temp.second;
            if(mp.find(hd)==mp.end())
                mp[hd]=frontnode->data;
            if(frontnode->left)
                q.push(make_pair(frontnode->left,hd-1));  
            if(frontnode->right)
                q.push(make_pair(frontnode->right,hd+1));
        }
        for(auto i: mp)
            ans.push_back(i.second);
    }
int main(){
    Node* root;
    root=buildtree();
    levelordertraversal(root);
    Node* q =new Node(50);
    int k=2;
    cout<<endl;
    topView(root);
}
