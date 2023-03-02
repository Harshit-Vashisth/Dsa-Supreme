#include<bits/stdc++.h>
using namespace std;

int find(vector<int> arr,int s,int e,int tar){
    int mid=0,ans=-1;
    while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]==tar)
        {ans=mid;
        e=mid-1;
        }
        else if(arr[mid]<tar)
        s=mid+1;
        else if(tar>arr[mid])
        e=mid-1;
    }
    return ans;
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