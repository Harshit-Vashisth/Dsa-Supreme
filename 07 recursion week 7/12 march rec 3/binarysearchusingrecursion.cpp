#include<bits/stdc++.h>
using namespace std;
int binarysearch(vector<int>& arr,int s,int e,int tar){
    if(s>e)
        return -1;
    int mid=s+(e-s)/2;
    if(arr[mid]==tar)
    return mid;
    if(arr[mid]>tar)
        return binarysearch(arr,s,mid-1,tar);
    else
       return  binarysearch(arr,mid+1,e,tar);
}
int main(){
    vector<int> v{10,20,30,60,70,99};
    int n=7,tar;
    int s=0,e=n-1;
    cout<<"Enter the value of key"<<endl;
    cin>>tar;
    cout<<"Element present at :> "<<binarysearch(v,s,e,tar);
}
