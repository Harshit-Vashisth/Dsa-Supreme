#include<bits/stdc++.h>
using namespace std;
void permutation(string& s,int i){
    if(i>=s.length())
    {
        cout<<s<<" ";
        return;
    }
    for(int j=i;j<s.length();j++)
    {
        swap(s[i],s[j]);
        permutation(s,i+1);
        swap(s[i],s[j]);
    }
    }
int main(){
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    cout<<"Executing"<<endl;
    permutation(s,0);
    
}