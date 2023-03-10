#include<bits/stdc++.h>
#include<algorithm>
using namespace std; 
bool possible(vector< int> arr,int k, int mid){
    int curr=0,r,time,j;
    for(int i=0;i<arr.size();i++){
    time=0;
   r=arr[i],j=1;  //r=rank   j =1r 2r 3r 1 2 3 is the j 
   while(true){
    if(time+j*r<=mid){
        curr++;
        time+=j*r;
        j++;
    }
    else break;
   }
    if(curr>=k)
    return true;
    }
   return false;
}
 int mintime(vector<int> arr, int n){
     int s=0,e,ans=-1,mid,h=*max_element(arr.begin(),arr.end());
    e=h*(n*(n+1)/2);
    while(s<=e){
        mid=s+(e-s)/2;
        if(possible(arr,n,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else
        s=mid+1;
    }
    return ans;
}
int main(){
    int Test;cin>>Test;
    while(Test--){
        int np,nc;
        cin>>np>>nc;
        vector<int> arr;
        while(nc--){
            int r;cin>>r;
            arr.push_back(r);
        }
         cout<<mintime(arr,np);
    }
    return 0;
    }