#include<bits/stdc++.h>
using namespace std;
vector<int> solve(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;
        
        for(int i =0;i<k;i++){
            while(!dq.empty()& nums[i]>=nums[dq.back()])
                dq.pop_back();
            dq.push_back(i);
        }
        cout<<"HI";
        ans.push_back(nums[dq.front()]);
        for(int i=k;i<nums.size();i++){
            if(i-dq.front()>=k)
                dq.pop_front();
             while(!dq.empty()&& nums[i]>=nums[dq.back()])
                dq.pop_back();
            dq.push_back(i);
            ans.push_back(nums[dq.front()]);
            
        }
        return ans;
    }
int main(){
    vector<int> nums;
  
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(6);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(5);
    nums.push_back(1);
for(auto i: nums){
        cout<<i;
    }
    cout<<endl;
    int k=4,n=8;
    vector<int> ans=solve(nums,k);
    int sum=0;
    
    for(auto i: ans){
        cout<<i;
    }
    cout<<sum;
}