#include<bits/stdc
class Solution {
public:
    bool solveRecursive(int index,int target,vector<int>& nums){ //this recursive function will return in exponential time complexity 
        if(index>=nums.size())
            return 0;
        if(target<0)
            return 0;
        if(target==0)
            return 1;

        bool include=0;
        if(target-nums[index]>=0)
            include=solveRecursive(index+1,target-nums[index],nums);
        bool exclude=solveRecursive(index+1,target,nums);
        return (include|| exclude);
    }
    bool topDown(int index,int target,vector<int>& nums,vector<vector<int>> &dp){
            if(index>=nums.size())
                return 0;
            if(target<0)
                return 0;
            if(target==0)
                return 1;
            if(dp[index][target]!=-1)
                return dp[index][target];
            bool include=0;
            if(target-nums[index]>=0)
                include=topDown(index+1,target-nums[index],nums,dp);
            bool exclude=topDown(index+1,target,nums,dp);
        dp[index][target]=(include|| exclude);
        return dp[index][target];
    }
    bool bottomUp(int target,vector<int>& nums){
            vector<vector<int>> dp(nums.size()+1,vector<int>( target+1,0));
            for(int i=0;i<nums.size();i++)
                dp[i][0]=1;
            
            for(int index=nums.size()-1;index>=0;index--){
                for(int t=1;t<=target;t++){
                    bool include=0;
                if(t-nums[index]>=0)
                    include=dp[index+1][t-nums[index]];
                    bool exclude=dp[index+1][t];
                    dp[index][t]=(include|| exclude);
                }
            }
            return dp[0][target];
    }
    bool spaceoptimise2(vector<int> &nums,int target){
        vector<bool> curr(target+1,0);
        curr[0]=1;
        int n=nums.size();
         for(int index=n-1;index>=1;index--){
                for(int t=target;t>=0;t--){
                    bool include=0;
                if(t-nums[index]>=0)
                    include=curr[t-nums[index]];
                    bool exclude=curr[t];
                    curr[t]=(include|| exclude);
                }
            }
            return curr[target];
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum & 1)
            return false;
        int target=sum/2;
        int index=0;
        // return solveRecursive(index,target,nums);
        // vector<vector<int>> dp(nums.size()+1,vector<int>( target+1,-1));
        // return topDown(index,target,nums,dp);
        return spaceoptimise2(nums,target);
    }
};