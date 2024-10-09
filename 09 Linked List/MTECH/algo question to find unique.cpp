#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& arr, int size){
    if(arr.size()==1)
    return arr[0];
    int s=0,e=arr.size()-1;
 int mid=s+(e-s)/2;
    while(s<=e){
       mid=s+(e-s)/2;
        if(arr[mid]!=arr[mid+1]&&arr[mid]!=arr[mid-1])
        return arr[mid];
        else if((mid%2==0 &&arr[mid]!=arr[mid+1])||(mid%2!=0 &&arr[mid]!=arr[mid-1]))
        e=mid+1;
        else 
        s=mid-1;
    }
    return mid;
}
int main(){
    vector<int> arr={1,1,2,2,4,5,5,7,7,8,8};
    int size=arr.size();
    cout<<"hello";
    int ele=search(arr,size);
    cout<<ele;
}