#include<bits/stdc++.h>
using namespace std;
class Solution
{
    bool possible(int a[],int n,int m ,long long mid){
        long long sum=0;
        int c=1;
        for(int i=0;i<n;i++){
            if(a[i]>mid)
            return false;
            if(sum+a[i]>mid)
            {
                c++;
                sum=a[i];
                if(c>m)
                return false;
            }
            else
            sum+=a[i];
        }
        return true;
    }
  public:
    long long minTime(int arr[], int n, int k)
    {
        long long s=0,mid,ans=-1,e=0;
        for(int i=0;i<n;i++)
        e+=arr[i];
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(possible(arr,n,k,mid))
            {
                ans=mid;
                e=mid-1;
            }
            else
            s=mid+1;
        }
        return ans;
    }
};