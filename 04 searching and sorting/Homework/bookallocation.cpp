#include<bits/stdc++.h>
using namespace std;
class Solution 
{
    bool possible(int a[],int n,int m ,int mid){
        int sum=0,c=1;
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
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        if(M>N)
        return -1;
        int s=0,e=accumulate(A,A+N,0);
        int ans=-1,mid;
        while(s<=e){
            mid=s+(e-s)/2;  //(s+e)>>1
            if(possible(A,N,M,mid))
            {
                ans=mid;
                e=mid-1;
            }
            else
            s=mid+1;
        }
        }
};