#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    int recursive(vector<int>& coins, int amount) {
        if(amount==0)
        return 0;
        if(amount%coins[0]!=0)
        return -1;
        if(amount<0)
        return INT_MAX;
        int mini=INT_MAX;
        for(int i=0;i<coins.size();i++){
            int ans=coinChange(coins,amount-coins[i]);
            if(ans!=INT_MAX)
                mini=min(mini,ans+1);
        }
        return mini;
    }


     int solveMem(vector<int>& coins, int amount, vector<int>& dp) {
        //base case
        if(amount == 0) {
            return 0;
        }
        if(amount < 0 ) {
            return INT_MAX;
        }
        //ans already exists
        if(dp[amount] != -1) {
            return dp[amount];
        }

        int mini = INT_MAX;
        for(int i=0; i<coins.size(); i++) {
            int ans = solveMem(coins, amount - coins[i], dp);
            if(ans != INT_MAX) {
                mini = min(mini,1+ ans);
            }
        }
        dp[amount] = mini;
        return dp[amount];
    }


    int bottomUp(vector<int>& coins,int amount){
        vector<int> dp(amount+1,INT_MAX);
        dp[0]=0;
        for(int target=1;target<=amount;target++){
            int mini=INT_MAX;
            for(int i=0;i<coins.size();i++){
                if(target-coins[i]>=0){
                    int ans=dp[target-coins[i]];
                    if(ans!=INT_MAX)
                        mini=min(mini,1+ans);
                }
            }
            dp[target]=mini;
        } 
        return dp[amount];
    }
   
    int coinChange(vector<int>& coins,int amount){
        vector<int> dp (amount+1,-1);
        int ans= bottomUp(coins,amount);
        if(ans==INT_MAX)
            return -1;
        else
            return ans;
    }
};