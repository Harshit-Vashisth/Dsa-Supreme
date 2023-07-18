#include<bits/stdc++.h>
using namespace std;
int recursion(int n,int k){
    if(n==1)
    return k;
    if(n==2)
        return k+k*(k-1);
    return (recursion(n-2,k)+recursion(n-1,k))*(k-1);
}
int topDown(int n,int k,vector<int> &dp){
    if(n==1)
        return k;
    if(n==2)
        return k+k*(k-1);
    if(dp[n]!=-1)
        return dp[n];
    dp[n]= (dp[n-2]+dp[n-1])*(k-1);
    return dp[n];
}
int getpainted(int n ,int k){
    // return recursion(n,k);
    vector<int> dp(n+1,-1);
    return topDown(n,k,dp);
}
int main(){
    int n =3;
    int k=2;
    cout<<getpainted(n,k);
}