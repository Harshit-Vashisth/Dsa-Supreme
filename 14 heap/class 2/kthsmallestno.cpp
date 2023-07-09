#include<bits/stdc++.h>
using namespace std;
int getkthsmallest(int arr[],int n,int k){
    priority_queue<int> pq;
    for(int i =0;i<k;i++)
        pq.push(arr[i]);

    for(int i=k;i<n;i++){
        if(arr[i]<pq.top())
            pq.pop();
    }
    return pq.top();
}
int main (){
    int arr[]={10,5,20,4,150};
    int n=5;
    int k=3;
    int ans=getkthsmallest(arr,n,k);
    cout<<ans;
}