#include<bits/stdc++.h>
using namespace std;

    void search(string s,char ch){
       unordered_map<string,string> mp;
        int count=0;
        for(char i:s){
            if(i==ch)
                count++;
            }
        cout<<"The occurance of char is "<<count<<endl;
    }
int main(){
    unordered_map<string,string> mp;
    string s="Trivanathapuram";
    search(s,'a');
}