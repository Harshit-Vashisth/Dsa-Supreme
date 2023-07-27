#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int recursive(string text1,string text2,int i,int j){
        if(i==text1.length()||j==text2.length())
            return 0;
            int ans;
        if(text1[i]==text2[j])
            ans=1+recursive(text1,text2,i+1,j+1);
        else
            ans=max(recursive(text1,text2,i,j+1),recursive(text1,text2,i+1,j));
        return ans;
    }
    int topdown(string& text1,string& text2,int i,int j,vector<vector<int>>& dp){
        if(i==text1.length()||j==text2.length())
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int ans;
        if(text1[i]==text2[j])
            ans=1+topdown(text1,text2,i+1,j+1,dp);
        else
            ans=max(topdown(text1,text2,i,j+1,dp),topdown(text1,text2,i+1,j,dp));
        dp[i][j]=ans;
        return dp[i][j];
    }
    int bottomup(string text1,string text2){
        vector<vector<int>> dp(text1.length()+1,vector<int>(text2.length()+1,0));
        for(int i=text1.length()-1;i>=0;i--){
            for(int j=text2.length()-1;j>=0;j--){

                    int ans;
                    if(text1[i]==text2[j])
                        ans=1+dp[i+1][j+1];
                    else
                        ans=max(dp[i][j+1],dp[i+1][j]);
                    dp[i][j]=ans;
            }
        }
        return dp[0][0];
    }
    int spaceOptimise(string text1,string text2){
        vector<int> curr(text2.length()+1,0);
        vector<int> next(text2.length()+1,0);
        for(int i=text1.length()-1;i>=0;i--){
            for(int j=text2.length()-1;j>=0;j--){
                    int ans;
                    if(text1[i]==text2[j])
                        ans=1+next[j+1];
                    else
                        ans=max(curr[j+1],next[j]);
                    curr[j]=ans;
            }
            next=curr;
        }
        return next[0];
    }
    
    int longestCommonSubsequence(string text1, string text2) {
         int i=0,j=0;
        return recursive(text1,text2,i,j);
        vector<vector<int>> dp(text1.length()+1,vector<int>(text2.length()+1,-1));
        return topdown(text1,text2,i,j,dp);
        return bottomup(text1,text2);
        // return spaceOptimise2(text1,text2);
    }
};