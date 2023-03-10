#include<bits/stdc++.h>
#include<algorithm>
using namespace std; 
bool possible(vector<long long int> arr,long long int k,long long int mid){
    long long int sum=0;
    for(long long int i=0;i<arr.size();i++){
        if(arr[i]>mid)
        sum+=arr[i]-mid;
    }
    return sum>=k;
}
long long int maxSawBladeHeight(vector<long long int> arr,long long int k){
    long long int s=0,e,ans=-1,mid;
    e=*max_element(arr.begin(),arr.end());
    while(s<=e){
        mid=s+(e-s)/2;
        if(possible(arr,k,mid))
        {
            ans=mid;
            s=mid+1;
        }
        else
        e=mid-1;
    }
    return ans;
}
int main(){
    vector<long long int> arr;
    long long int n,m;
    cout<<"Enter the values"<<endl;
    cin>>n>>m;
    while(n--){
        long long int h;
        cin>>h;
        arr.push_back(h);
    }
    cout<<maxSawBladeHeight(arr,m);
    return 0;
    }