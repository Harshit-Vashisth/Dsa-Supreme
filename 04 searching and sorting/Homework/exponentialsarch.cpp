#include<bits/stdc++.h>
using namespace std;
int binarysearch(vector<int>& arr,int s,int e, int t){
    //
    int mid,ans=0;
    while(s<e){
        mid=s+(e-s)/2;
        if(mid==t)
        return mid;
        else if(arr[mid]<t)
        s=mid+1;
        else 
        e=mid;
    }
    return -1;
}
int search(vector<int> &arr,int n,int t){
    int i =0;
    while(arr[i]<=t){
        i=i*2;
    }
    return binarysearch(arr,i/2,min(i,n-1),t);
}
int main(){
    int t=0;
    vector<int> v={10,20,30,40,50,60,70,80,83,90};
    cout<<"Enter the target"<<endl;
    cin>>t;
    cout<<"Element is at index "<<search(v,v.size(),t);
}