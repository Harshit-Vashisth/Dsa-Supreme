#include<bits/stdc++.h>
using namespace std; 
bool possible(vector<int>& arr,int k,int mid){
    int c=1, sum=0;
    for(int i=0;i<arr.size();i++){
        
    }
}
int spoj(vector<int>& arr,int n,int k){
    int s=0,e=accumulate(arr.begin(),arr.end(),0),ans=-1,mid;
    while(s<=e){
        mid=s+(e-s)/2;
        if(possible(arr,k,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else
        s=mid+1;
    }
}
int main(){
    vector<int> arr={20,15,10,17};
    int n=4,m=7;
    cout<<spoj(arr,n,m);
    }