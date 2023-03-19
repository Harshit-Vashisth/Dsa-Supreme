#include<bits/stdc++.h>
using namespace std;
    void premutate(vector<int>& arr,vector<vector<int>>& ans,vector<int> prem,int i){
        if(i>=arr.size()){
            ans.push_back(prem);
            return ;
        }
        premutate(arr,ans,prem,i+1);
        prem.push_back(arr[i]);
        premutate(arr,ans,prem,i+1);
    }
int main(){
    vector<int> arr={1,2,3};
    vector<vector<int>> ans;
    vector<int> prem;
    premutate(arr,ans,prem,0);
    for(auto i:ans)
    {
        for(auto j:i)
        cout<<j<<" ";
        cout<<endl;
    }
}