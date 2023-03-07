#include<bits/stdc++.h>
using namespace std;
int binarysearch(vector<int>& arr,int target){
    int s=0,e=arr.size(),mid=0;
    while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]==target)
        return mid;
        else if(arr[mid+1]==target)
        return mid+1;
        else if(arr[mid-1]==target)
        return mid-1;
        else if(arr[mid]>target)
        e=mid-2;
        else
        s=mid+2;
    }
    return -1;
}
int main(){
    int target;
    vector<int> v={10,3,40,20,50,80,70};
    cin>>target;
    int n=binarysearch(v,target);
    cout<<n;
}