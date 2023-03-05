#include<bits/stdc++.h>
using namespace std;
int findpivot(vector<int>& nums){
    int s=0,e=nums.size()-1,mid=0;
    while(s<e){
        mid=s+(e-s)/2;
        if(mid+1<nums.size()&&nums[mid]>nums[mid+1])
        return mid;
        else if(mid-1>0&&nums[mid-1]>nums[mid])
        return mid-1;
        else if(nums[s]<nums[mid])
        s=mid+1;
        else
        e=mid-1;
    }
    return -1;
}
int main(){
    vector<int> v={3,4,5,6,7,1,2};
    cout<<findpivot(v);
}