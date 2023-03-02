#include<bits/stdc++.h>
using namespace std;

bool find(vector<int> arr,int s,int e,int tar){
    int mid=0;
    while(s<e){
        mid=s+(e-s)/2;
        if(mid==tar)
        return true;
        else if(mid<tar)
        s=mid+1;
        else
        e=mid;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    int k,t;
    cout<<"Enter the value";
    for(int i =0;i<n;i++){
        cin>>k;
        v.push_back(k);
    }
    cout<<"enter the target value";
    cin>>t;
    cout<<find(v,0,n-1,t);
    return 0;
}