#include<bits/stdc++.h>
using namespace std;
void mergeheap(priority_queue<int,vector<int> , greater<int> > &pq,vector<int> & arr1,vector<int> & arr2){
    vector<int> ans;
    for(int i =0;i<arr1.size();i++){
        pq.push(arr1[i]);
    }
    for(int i =0;i<arr2.size();i++){
       pq.push(arr2[i]);
    }
}
int main (){
    vector<int> arr1={12,1,4,5,2,6,10};
    vector<int> arr2={3,7,16,8,9};
    priority_queue<int,vector<int> , greater<int> > pq;
    mergeheap(pq,arr1,arr2);
    while(!pq.empty()){
    cout<<pq.top()<<"  ";
    pq.pop();
    }
}