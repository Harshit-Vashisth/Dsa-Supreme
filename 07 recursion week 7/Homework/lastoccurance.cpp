#include<bits/stdc++.h>
using namespace std;
int lastocc(vector<int> arr, int target){
    int s=0,e=arr.size()-1;
    int mid=0,ans=-1;
    while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]==target)
        {
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else if(arr[mid]>target)
        e=mid-1;
    }
    return ans;
}
    
int main(){
    vector<int> nums={4,3,3,2,5,1,5,2,4,3,3,3,3,4,2,3,5};
    cout<<lastocc(nums,3);
}