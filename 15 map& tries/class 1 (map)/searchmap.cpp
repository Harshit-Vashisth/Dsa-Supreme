#include<bits/stdc++.h>
using namespace std;
    void search(unordered_map<string,string> mp,string find){
        cout<<mp.count("B");
    }
int main(){
    unordered_map<string,string> mp;
    mp["A"]="head";
    mp["B"]="hello";
    mp["C"]="Once";
    mp["D"]="Not";
    mp["E"]="Working";
    for(auto it:mp)
        cout<<it.first<<"  "<<it.second;
}