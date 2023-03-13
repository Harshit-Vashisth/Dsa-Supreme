#include<bits/stdc++.h>
using namespace std;
void printseq(string& str,vector<string>& ans,string out,int i){
    if(i>=str.length())
    {
        ans.push_back(out);
        return;
    }

    //exclude 
    printseq(str,ans,out,i+1);
//include
    out.push_back(str[i]);
    printseq(str,ans,out,i+1);
    
}
int main(){
    cout<<"Enter the string for subseq"<<endl; 
    vector<string> ans;
    string s;
    cin>>s;
    int i=0;
    string out="";
    printseq(s,ans,out,i);
    cout<<"The subsequence of given string is :- "<<endl;
    for(auto i:ans)
    cout<<i<<endl;
}