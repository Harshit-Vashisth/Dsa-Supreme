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