#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>& arr,int tar){
    if(tar==0)
    return 0;
    if(tar<0)
    return INT_MAX;
    int mini=INT_MAX;
    for(int i=0;i<arr.size();i++){
        int ans=solve(arr,tar-arr[i]);
        if(ans!=INT_MAX)
            mini=min(ans+1,mini);
    }
    return mini;
}
int main(){
    //you have to tell the min number of eleements required to reach target sum 
    vector<int> v={1,2};
    int tar=9;
    cout<<solve(v,tar);
}
  