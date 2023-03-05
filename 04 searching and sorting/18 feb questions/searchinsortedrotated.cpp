class Solution {
public:
    int findpivot(vector<int>& arr){
        int s=0,e=arr.size()-1,mid=0;
        while(s<e){
            mid=s+(e-s)/2;
            if(mid+1<arr.size()&&arr[mid]>arr[mid+1])
            return mid;
            else if(mid-1>=0&& arr[mid-1]>arr[mid])
            return mid-1;
            else if(arr[s]>=arr[mid])
            e=mid-1;
            else
            s=mid;
        }
        return s;
    }
    int binary(vector<int>& nums,int tar,int s,int e){
        int mid=0;
        while(s<=e){
            mid=s+(e-s)/2;
            if(nums[mid]==tar)
            return mid;
            else if(nums[mid]<tar)
            s=mid+1;
            else
            e=mid-1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int pivot=findpivot(nums);
        int ans=-1;
        if(target>=nums[0]&& target<=nums[pivot])
        ans=binary(nums,target,0,pivot);
        else
        ans=binary(nums,target,pivot+1,nums.size()-1);
        return ans; 
    }
};