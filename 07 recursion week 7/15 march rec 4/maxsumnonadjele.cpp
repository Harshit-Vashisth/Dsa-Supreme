#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& arr,int i,int sum,int maxi){
    if(i>=arr.size()){
     maxi =max(maxi,sum);
     return ;
    }

    solve(arr,i+2,sum+arr[i],maxi);
    
    solve(arr,i+1,sum+arr[i],maxi);
}
int main(){
    vector<int> arr={2,1,4,9};
    int maxi=INT_MIN;
    solve(arr,0,0,maxi);
    cout<<"The max sym possible could be is "<<maxi<<endl;
}