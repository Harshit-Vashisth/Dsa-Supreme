#include<bits/stdc++.h>
using namespace std;
    void reverse(string& s, int i,int j){
        if(i>=j)
        return;
        char c=s[i];
        s[i]=s[j];
        s[j]=c;
        reverse(s,i+1,j-1);
    }
int main(){
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    reverse(s,0,s.length()-1);
    cout<<s;
}