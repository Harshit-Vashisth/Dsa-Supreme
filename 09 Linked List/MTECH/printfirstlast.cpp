#include<bits/stdc++.h>
using namespace std;
int first(vector<int>& arr,int t){
    int s=0;
    int ans=0;
    int e=arr.size()-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if(arr[mid]==t)
        {
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<t){
            s=mid+1;
        }
        else
        e=mid-1;
    }
    return ans;
}
int last(vector<int>& arr, int t){
    int s=0;
    int ans=0;
    int e=arr.size()-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if(arr[mid]==t){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<t){
            s=mid+1;
        }
        else
        e=mid-1;
    }
    return ans;
}
int main(){
    vector<int> arr;
    int n,num,t;
    cout<<"Enter the element in the array "<<endl;
    
    cin>>n;
    for(int i=0;i>n;i++){
        cin>>num;
        arr.push_back(num);
    }
    cout<<"enter the traget which you want to be search "<<endl;
    cin>>t;
    int a1=first(arr,t);
    int a2=last(arr,t);
    cout<<a1<<"   "<<a2;
}