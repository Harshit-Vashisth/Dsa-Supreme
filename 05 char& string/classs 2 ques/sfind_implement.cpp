#include<bits/stdc++.h>
using namespace std;
    int findocc(string s,int n,string part){
        int i=0;
        while(i<s.size()-part.length()){
            if(s.substr(i,part.length()-1)==part)
            return i;
        }
        return -1;
    }
int main(){
    int n=0;
    string s="daabcbaabcbc";
    string part="abc";
    
    int f=findocc(s,n,part);
    cout<<f;
}