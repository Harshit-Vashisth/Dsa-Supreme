#include<bits/stdc++.h>
#include<limits>
#include<vector>

using namespace std;

vector<int> intersect(vector<int> a,vector<int> b){
    vector<int> ans;
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++)
        if(b[j]==a[i]){