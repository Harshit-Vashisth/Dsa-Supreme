#include<bits/stdc++.h>
using namespace std;

    void search(unordered_map<string,string> mp,string s){
        //method 1
        cout<<mp.count("B")<<endl;

        //method 2
        if(mp.find(s)!=mp.end())
            cout<<"Found"<<endl;
        else
            cout<<"Not Found"<<endl;
        
        for(auto i:mp){
            if(i.first==s)
            cout<<"Found"<<endl;
            }
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
        cout<<endl;
    search(mp,"B");
}