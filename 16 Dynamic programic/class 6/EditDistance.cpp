#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solverecursive(string& word1,string& word2,int i,int j){
        if(i>=word1.length())
            return word2.length()-j;
        if(j>=word2.length())
            return word1.length()-i;
        int ans=INT_MAX;
        if(word1[i]==word2[j])
            ans=solverecursive(word1,word2,i+1,j+1);
        else{
            int replaced=1+solverecursive(word1,word2,i+1,j+1);
            int deleted=1+solverecursive(word1,word2,i+1,j);
            int inserted=1+solverecursive(word1,word2,i,j+1);
            ans=min(replaced,min(deleted,inserted));
        }
        return ans;
    }
    int topDown(string& word1,string& word2,int i,int j,vector<vector<int>>& dp){
        if(i>=word1.length())
            return word2.length()-j;
        if(j>=word2.length())
            return word1.length()-i;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int ans=INT_MAX;
        if(word1[i]==word2[j])
            ans=topDown(word1,word2,i+1,j+1,dp);
        else{
            int replaced=1+topDown(word1,word2,i+1,j+1,dp);
            int deleted=1+topDown(word1,word2,i+1,j,dp);
            int inserted=1+topDown(word1,word2,i,j+1,dp);
            ans=min(replaced,min(deleted,inserted));
        }
        dp[i][j]=ans;
        return dp[i][j];
    }
    int bottomUp(string& word1,string& word2){
        vector<vector<int>> dp(word1.length()+1,vector<int>(word2.length()+1,0));
        for(int j=0;j<word2.length();j++)
            dp[word1.length()][j]=word2.length()-j;
        for(int i=0;i<word1.length();i++)
            dp[i][word2.length()]=word1.length()-i;
        for(int i=word1.length()-1;i>=0;i--){
            for(int j=word2.length()-1;j>=0;j--){
                int ans=INT_MAX;
                if(word1[i]==word2[j])
                    ans=dp[i+1][j+1];
                else{
                    int replaced=1+dp[i+1][j+1];
                    int deleted=1+dp[i+1][j];
                    int inserted=1+dp[i][j+1];
                    ans=min(replaced,min(deleted,inserted));
                }
                dp[i][j]=ans;
            }
        }
        return dp[0][0];
    }
    int spaceoptimise(string& word1,string& word2){
         vector<int> curr(word2.length()+1,0);
         vector<int> next(word2.length()+1,0);
        for(int j=0;j<word2.length();j++)
            next[j]=word2.length()-j;
        for(int i=word1.length()-1;i>=0;i--){
                curr[word2.length()]=word1.length()-i;
            for(int j=word2.length()-1;j>=0;j--){
                int ans=0;
                if(word1[i]==word2[j])
                    ans=next[j+1];
                else{
                    int replaced=1+next[j+1];
                    int deleted=1+next[j];
                    int inserted=1+curr[j+1];
                    ans=min(replaced,min(deleted,inserted));
                }
                curr[j]=ans;
            }
            next=curr;
        }
        return next[0];
    }
    int minDistance(string word1, string word2) {
        if(word1.length()==0)
            return word2.length();
        if(word2.length()==0)
            return word1.length();
        //     int i=0,j=0;
        //     vector<vector<int>> dp(word1.length()+1,vector<int>(word2.length()+1,-1));
        // return topDown(word1,word2,i,j,dp);
        return spaceoptimise(word1,word2);
    }
};