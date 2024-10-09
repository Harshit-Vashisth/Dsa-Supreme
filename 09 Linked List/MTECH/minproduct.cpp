#include <bits/stdc++.h>
using namespace std;
int minprod(vector<int> arr,int n){
    if(n==1)
    return arr[0];
    int neg=0;
    sort(arr.begin(),arr.end());
    for(int i =0;i<n;i++){
        if(arr[i]>=0)
        break;
        if(arr[i]<0)
        neg++;
    }
    if(neg==1)
    return arr[0]*arr[n-1];
    if(neg==0)
    return arr[0]*arr[1];
    if(neg>1){
        if(abs(arr[0])<abs(arr[n-1]))
        return arr[0]*arr[n-1];
        else if(abs(arr[1])>abs(arr[n-1]))
        return arr[1]*arr[0];
        else
        return arr[0]*arr[n-1];
    }
}
int main(){
      vector<int> arr = {-4,5,1,2,6,3};
      int n=arr.size();
      cout<<minprod(arr,n);
}
