//QUestion link https://www.codingninjas.com/codestudio/problems/move-all-negative-numbers-to-beginning-and-positive-to-end_1112620?leftPanelTab=1

#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    // Write your code here.
    int i=0;
    for(int j=0;j<nums.size();j++){
        if(nums[j]<0)
        swap(nums[i++],nums[j]);
    }
    return nums;
}
