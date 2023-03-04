class Solution {
public:
int firstocc(vector<int> arr, int target,int n){
    int s=0,e=n-1;
    int mid=0,ans=-1;
    while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]==target)
        {
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>target)
            e=mid-1;
        
        else if( target>arr[mid])
        s=mid+1;
    }
    return ans;
}
int lastocc(vector<int> arr, int target){
    int s=0,e=arr.size()-1;
    int mid=0,ans=-1;
    while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]==target)
        {
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else if(arr[mid]>target)
        e=mid-1;
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int k=firstocc(nums,target,nums.size());
        ans.push_back(k);
        ans.push_back(lastocc(nums,target));
        return ans;
    }
};