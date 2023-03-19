#include<bits/stdc++.h>
using namespace std;
    bool check(string& s,int i, int j){
        if(i>=j)
        return true;
        if(s[i]!=s[j])
        return false;
        return check(s,i+1,j-1);
    }
int main(){
    string s1;
    cout<<"Enter the stirng"<<endl;
    cin>>s1;
    cout<<"String  ->"<<s1<<endl;
    int i=0,j=s1.length()-1;
   
    cout<<"string palindrme -> "<<check(s1,i,j);
    
}