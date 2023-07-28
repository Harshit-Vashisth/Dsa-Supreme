#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solverec(vector<int>& nums,int curr,int prev){
        if(curr>=nums.size()){
            return 0;
        }
        int include=0;
        if(prev==-1||nums[curr]>nums[prev])
            include=1+solverec(nums,curr+1,curr);
        
        //exclude
        int exclude=solverec(nums,curr+1,prev);
        return max(include,exclude);
    }
    int topDown(vector<int>& nums,int curr,int prev,vector<vector<int>>& dp){
         if(curr>=nums.size()){
            return 0;
        }
        if(dp[curr][prev+1]!=-1)
            return dp[curr][prev+1];
        int include=0;
        if(prev==-1||nums[curr]>nums[prev])
            include=1+topDown(nums,curr+1,curr,dp);
        
        //exclude
        int exclude=topDown(nums,curr+1,prev,dp);
        dp[curr][prev+1]= max(include,exclude);
        return dp[curr][prev+1];
    }
    int bottomUp(vector<int>& nums){
        vector<vector<int>> dp(nums.size()+1,vector<int>(nums.size()+1,0));

        for(int curr=nums.size()-1;curr>=0;curr--){
            for(int prev=curr-1;prev>=-1;prev--){

                 
                    int include=0;
                    if(prev==-1||nums[curr]>nums[prev])
                        include=1+dp[curr+1][curr+1];
                    
                    //exclude
                    int exclude=dp[curr+1][prev+1];
                    dp[curr][prev+1]= max(include,exclude);
                    
                }
        }
        return dp[0][0];
    }
    int spaceoptimise(vector<int>& nums){
         vector<int> currRow(nums.size()+1,0);
         vector<int> nextRow(nums.size()+1,0);

         for(int curr=nums.size()-1;curr>=0;curr--){
             for(int prev=curr-1;prev>=-1;prev--){
                int include=0;
                    if(prev==-1||nums[curr]>nums[prev])
                        include=1+nextRow[curr+1];
                    
                    //exclude
                    int exclude=nextRow[prev+1];
                    currRow[prev+1]= max(include,exclude); 
                }
                //shifting 
                nextRow=currRow;
        }
        return nextRow[0];
    }
    int solveOptimal(vector<int>& nums){
        if(nums.size()==0)
            return 0;
        vector<int> ans;
        ans.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]>ans.back())
                ans.push_back(nums[i]);
            else{
                int index=lower_bound(ans.begin(),ans.end(),nums[i])-ans.begin();
                ans[index]=nums[i];
            }
        }
        return ans.size();
    }
    int lengthOfLIS(vector<int>& nums) {
        //  int prev=-1,curr=0;
        // return solverec(nums,curr,prev);
        // vector<vector<int>> dp(nums.size()+1,vector<int>(nums.size()+1,-1));
        // return topDown(nums,curr,prev,dp);
        // return bottomUp(nums);
        return solveOptimal(nums);
    }
};