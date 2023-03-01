#include <bits/stdc++.h>
#include <vector>

//from leetcode 

using namespace std;


class Solution {
public:
    void sortColors(vector<int>& nums) {
       int l=0,m=0,h=nums.size()-1;
        while(m<=h){
            if(nums[m]==0)
            {
                swap(nums[l],nums[m]);
                l++;m++;
            }
            else if (nums[m]==1)
            {
                m++;
            }
            else
            {
                swap(nums[m],nums[h]);
                h--;
            }
        }
    }
};



class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> v1;
        vector<int> v2;
        vector<int> v3;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
            v1.push_back(0);
            else
            if(nums[i]==1)
            v2.push_back(1);
            else
            v3.push_back(2);
        }
        int i=0;
        while(i<v2.size()){
            v1.push_back(1);
            i++;
        }
        i=0;
         while(i<v3.size()){
            v1.push_back(2);
            i++;
        }
        nums=v1;
    }
};