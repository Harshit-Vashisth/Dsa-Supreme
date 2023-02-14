#include<bits/stdc++.h>
#include<vector>
using namespace std;
void unions(vector<int> arr1,vector<int> arr2){
    int s=0;
    vector<int> ans;
    for(int i=0;i<arr1.size();i++)
    ans.push_back(arr1[i]);
    for(int i=0;i<arr2.size();i++)
    ans.push_back(arr2[i]);

     for(int i=0;i<ans.size();i++)
   cout<<ans[i];
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