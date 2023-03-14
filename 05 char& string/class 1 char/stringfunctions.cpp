#include<bits/stdc++.h>
using namespace std;

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
    cout<<s1.compare(s2)<<endl;

    //finding
    cout<<s1.find("rs")<<endl;

    //find with npos
    if(s1.find("sww")==std::string::npos)
    cout<<"not found"<<endl;

    //replace the letter 
    s1.replace(5,2,"satu");
    cout<<s1<<endl;

    string st="Hello baby";
    st.erase(6,4);
    cout<<st;
}