#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    int k,t;
    cout<<"Enter the value";
    for(int i =0;i<n;i++){
        cin>>k;
        v.push_back(k);
    }
    cout<<"enter the target value";
    cin>>t;
    cout<<binary_search(v.begin(),v.end(),5);
    return 0;
}