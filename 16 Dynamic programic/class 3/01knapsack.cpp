#include<bits/stdc++.h>
using namespace std;
// in dp whenu go right to left u feel it more easy 
int usingrecursion(int weight[],int value[],int index,int capacity){
    if(index==0){
        if(weight[0]<=capacity)
            return value[0];
        else
            return 0;
        }
        int include=0;
        if(weight[index]<=capacity)
            include=value[index]+usingrecursion(weight,value,index-1,capacity-weight[index]);
        
        int exclude=usingrecursion(weight,value,index-1,capacity);
        int ans=max(include,exclude);
        return ans;
}
int Topdown(int weight[],int value[],int index,int capacity,vector<vector<int>> &dp){
    if(index==0){
        if(weight[0]<=capacity)
            return value[0];
        else
            return 0;
        }
        if(dp[index][capacity]!=-1)
            return dp[index][capacity];
         int include=0;
        if(weight[index]<=capacity)
            include=value[index]+Topdown(weight,value,index-1,capacity-weight[index]),dp;
        
        int exclude=Topdown(weight,value,index-1,capacity,dp);
        dp[index][capacity]=max(include,exclude);
        return dp[index][capacity];
   
}
int getMaxval(int weight[],int value[],int index,int capacity){
    // return usingrecursion(weight,value,index-1,capacity);
    vector<vector<int>> dp(index+1,(vector<int>(capacity+1,-1)));
    return Topdown(weight,value,index,capacity,dp);
}
int main(){
    int weight[]={4,5,1};
    int value[]={1,2,3};
    int capacity=4;
    int index=3;
    cout<<getMaxval(weight,value,index,capacity);
}