#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data,row,col;
    Node(int val,int r,int c){
        data=val;
        row=r;
        col=c;
    }
};
class compare{
    public:
    bool operator()(Node* a,Node* b){
        return a->data>b->data;}
};
vector<int> MergeSort(int arr[][4],int k,int n){
    priority_queue<Node*,vector<Node*>,compare> minheap;
    for(int i=0;i<k;i++){
        Node* temp=new Node(arr[i][0],i,0);
        minheap.push(temp);
    }
    vector<int> ans;
    while(!minheap.empty()){
        Node* temp=minheap.top();
        int top=temp->data;
        int toprow=temp->row;
        int topcol=temp->col;
        minheap.pop();
        ans.push_back(top);
        if(topcol+1<n){
            Node* newnode=new Node(arr[toprow][topcol+1],toprow,topcol+1);
            minheap.push(newnode);
        }
    }
    return ans;
}
int main(){
    int arr[][4]={{1,4,5},{2,6,8},{3,7,9,10}};
    int k=3,n=3;
    vector<int> ans=MergeSort(arr,k,n);
    for(auto i: ans)
        cout<<i<<" ";
}