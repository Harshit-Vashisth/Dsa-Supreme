#include<bits/stdc++.h>
using namespace std;
int lastocc(vector<int>& arr, int target,int s,int e,int& ans){
    if(s>=e)
        return ans;
    int mid=s+(e-s)/2;
    if(arr[mid]==target)
     {
        ans=mid;
        s=mid+1;
     }
     else if(arr[mid]<target)
        s=mid+1;
    else 
        e=mid-1;
}
int main(){
    vector<int> nums={2,2,2,3,3,3,3,4,5,7};
    int t=3;
    int ans=0;
    cout<<"Last Occurance of an element is :- "<<lastocc(nums,t,0,nums.size(),ans);
}