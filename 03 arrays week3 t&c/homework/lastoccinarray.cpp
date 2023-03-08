#include <bits/stdc++.h>
using namespace std;

int lastocc(vector<int> arr,int n,int tar){
    int ans=-1;
    int s=0,e=n-1;
    int mid=0;
    while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]==tar)
        {
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>tar)
        e=mid-1;
        else
        s=mid+1;
    }
    return ans;
}
int main(){
    vector<int> v={1,2,3,4,4,4,4,4,6,7};
    int n=v.size();
    int tar;
    cout<<"Enter the target";
    cin>>tar;
    int ind=lastocc(v,n,tar);
    cout<<"The last occ is "<<ind<<endl;
}