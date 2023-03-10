#include<bits/stdc++.h>
#include<algorithm>
using namespace std; 
bool possible(vector< int> arr,int k, int mid){
    long long int sum=0;
    for(long long int i=0;i<arr.size();i++){
        if(arr[i]>mid)
        sum+=arr[i]-mid;
    }
    return sum>=k;
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
    vector<int> arr;
   int n,m;
    cout<<"Enter the values"<<endl;
    cin>>n>>m;
    while(n--){
        h;
        cin>>h;
        arr.push_back(h);
    }
    cout<<mintime(arr,m);
    return 0;
    }