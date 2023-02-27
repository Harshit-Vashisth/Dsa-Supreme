#include <map>
#include<vector>
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]>1)
            ans.push_back(nums[i]);
        }
        return ans;
    }
};

//for first duplicated just retrun the first value when if is hit