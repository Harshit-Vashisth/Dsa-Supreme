#include<bits/stdc++.h>
#include<vector>
using namespace std;


void unions(vector<int> a,vector<int> b){
    vector<int> ans;
    map<int,int> mp;
    for(int i=0;i<a.size();i++){
        if(mp[a[i]]!=1){
       ans.push_back(a[i]);
       mp[a[i]]=1;
       } 
        }
        for(int i=0;i<b.size();i++){
        if(mp[b[i]]!=1){
       ans.push_back(b[i]);
       mp[b[i]]=1;
       } 
        }
    for(auto i:ans)
    cout<<i<<" ";
    }

int main(){

int n=0;
cout<<"Enter the number of elements"<<endl;
cin>>n;
    //method 1
   vector<int> v1(n);
   vector<int> v2(n);
   for(int i=0;i<n;i++)
    cin>>v1[i];
    for(int i=0;i<n;i++)
    cin>>v2[i];
    unions(v1,v2);
cout<<endl;
return 0;
}