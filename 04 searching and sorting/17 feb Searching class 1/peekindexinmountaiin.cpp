class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int ans =-1;
        int start=0,end=n-1,mid=0;
        while(start<end){
            mid=start+((end-start)/2);
            if(arr[mid]<arr[mid+1])
                start=mid+1;
            else
                end=mid;
          
        }
        return start;
    }
};

//https://leetcode.com/problems/peak-index-in-a-mountain-array/submissions/