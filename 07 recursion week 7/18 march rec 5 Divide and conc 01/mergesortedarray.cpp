#include<bits/stdc++.h>
using namespace std;
    void merge(vector<int> v1,vector<int> v2,vector<int>& ans){
        int len1=v1.size();
        int len2=v2.size();
        int i=0,j=0;
        while(i<len1&&j<len2){
            if(v1[i]<v2[i])
            ans.push_back(v1[i++]);
            else
            ans.push_back(v2[j++]);
        }
        while(i<len1)
        ans.push_back(v1[i++]);

        while(j<len2)
        ans.push_back(v2[j++]);
    }
int main(){
    vector<int> v1={1,4,5,9,10};
    vector<int> v2={2,3,5,6,8};
    vector<int> ans;
    merge(v1,v2,ans);
    for(auto i :ans)
    cout<<i<<" ";
}