#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={14,3,29,1,2,4,9};
    int n=7;
    for(int i=0;i<n-1;i++){
        int ele=i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[ele])
            ele=j;
        }
        swap(v[i],v[ele]);
    }
    for(auto i:v)
    cout<<i<<" ";
}