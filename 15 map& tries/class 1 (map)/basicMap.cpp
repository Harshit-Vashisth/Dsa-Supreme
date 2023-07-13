#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int,string> mp;
    mp[1]="head";
    mp[3]="hello";
    mp[2]="Once";
    mp[5]="Not";
    mp[4]="Working";
    for(auto it:mp)
        cout<<it.first<<"  "<<it.second;
}