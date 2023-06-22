#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>& arr,int n ,int i){
    if(i==n-1)
    return true;
    if(arr[i+1]<arr[i])
        return false;
    return check(arr,n,i+1);
}
int main(){
    vector<int> v{10,20,30,60,50};
    int n=5;
    cout<<"Array is sorted ? "<<check(v,n,0);
}
