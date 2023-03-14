#include<bits/stdc++.h>
using namespace std;
bool comp(string a,string b){
    if(a.length()!=b.length())
    return false; 
}
int main(){
    string s;
    cin>>s;
    cout<<s<<endl;
    
    // to find the length of string
    cout<<s.length()<<endl;

    //to check if the string is empty or not 
    cout<<s.empty()<<endl;

    //string push and pop
    s.push_back('a');
    cout<<s<<endl;
    s.pop_back();
    s.pop_back();
    cout<<s<<endl;

    //substring function important ++
    cout<<s.substr(1,5)<<endl;


    string s1="harshit",s2="harshit";
    //comparing two strings 
    cout<<s1.compare(s2);

    
}