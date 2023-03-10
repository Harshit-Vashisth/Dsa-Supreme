#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
bool possible(vector<int>& arr,int k,int mid){
    int c=1,pos=arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]-pos>=mid){
            c++;
            pos=arr[i];
        }
        if(c==k)
        return true;
    }
    return false;
}
    int solve(int n, int k, vector<int> &arr) {
    
    sort(arr.begin(),arr.end());
        // Write your code here
        int s=0,e=arr[arr.size()-1];
        int mid,ans=-1;
        while(s<=e){
            mid=s+(e-s)/2;
            if(possible(arr,k,mid))
            {
                ans=mid;
                s=mid+1;
            }
            else
            e=mid-1;
        }
        return ans;
    }
};