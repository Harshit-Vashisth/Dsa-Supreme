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
        ///glti ++
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
            include=value[index]+Topdown(weight,value,index-1,capacity-weight[index],dp);
        
        int exclude=Topdown(weight,value,index-1,capacity,dp);
        dp[index][capacity]=max(include,exclude);
        return dp[index][capacity];
}
int bottomup(int weight[],int value[],int n,int capacity){
    //galtiii++++
    vector<vector<int>> dp(n+1,(vector<int>(capacity+1,0)));
    // galti++
     for(int w=weight[0];w<=capacity;w++){
        if(weight[0]<=capacity)
            dp[0][w]=value[0];
        else
            dp[0][w]=0;
     }
     for(int index=1;index<n;index++){
        for(int wt=0;wt<=capacity;wt++){
             int include=0;
        if(weight[index]<=wt)
            include=value[index]+dp[index-1][wt-weight[index]];
        
        int exclude=dp[index-1][ wt];
        dp[index][wt]=max(include,exclude);
        }
     }// replace ni kara wagera me 
     return dp[n-1][capacity];
     //n -1 kyu kara n kyu ni 
}
int spaceoptimise(int weight[],int value[],int n,int capacity){
    // Time complexitity O(M)+O(M);
    //check zaruri h 0 hoga?
    vector<int> prev(capacity+1,0);
    vector<int> curr(capacity+1,0);
     for(int w=weight[0];w<=capacity;w++){
        if(weight[0]<=capacity)
            prev[w]=value[0];
        else
            prev[w]=0;
     }
     for(int index=1;index<n;index++){
        for(int wt=0;wt<=capacity;wt++){
             int include=0;
        if(weight[index]<=wt)
            include=value[index]+prev[wt-weight[index]];
        
        int exclude=prev[wt];
        curr[wt]=max(include,exclude);
       
        }
         //galti ++
        prev=curr;
     }
     return curr[capacity];
}
int spaceoptimise2(int weight[],int value[],int n,int capacity){
    // Time complexitity O(M)+O(M)=? O(m)
    vector<int> curr(capacity+1,0);
     for(int w=weight[0];w<=capacity;w++){
        if(weight[0]<=capacity)
            curr[w]=value[0];
        else
            curr[w]=0;
     }
     for(int index=1;index<n;index++){
        for(int wt=capacity;wt>=0;wt--){  //galti++   //kisi ka bhi ans nikalne ke liye right wale box ki koi need ni hoti h toh fir hum usko right to left karnge thats the only reason ki loop ulta h 
             int include=0;
        if(weight[index]<=wt)
            include=value[index]+curr[wt-weight[index]];
        
        int exclude=curr[wt];
        curr[wt]=max(include,exclude);
       
        }
     }
     return curr[capacity];
}
int getMaxval(int weight[],int value[],int index,int capacity){
    // // return usingrecursion(weight,value,index-1,capacity);
    // vector<vector<int>> dp(index+1,(vector<int>(capacity+1,-1)));
    // glti +++
    // return Topdown(weight,value,index-1, capacity,dp);
    // return bottomup(weight,value,index,capacity);
    // return spaceoptimise(weight,value,index,capacity);
    return spaceoptimise2(weight,value,index,capacity);
}
int main(){
    int weight[]={4,5,1};
    int value[]={1,2,3};
    int capacity=4;
    int index=3;
    cout<<getMaxval(weight,value,index,capacity);
}