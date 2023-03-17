#include<bits/stdc++.h>
using namespace std;
    string findocc(string& s,string part){
        int i=0;
        while(i<s.size()-part.length()){
            if(s.substr(i,part.length())==part)
                {
                    int c=0;
                    while(c<part.length()){
                        s[i]=s[c+i+part.length()-1];
                        c++;
                    }
                }
            i++;
        }
        return s.substr(0,s.length()-part.length());
    }
int main(){
    int n=0;
    string s="daabcbbc";
    string part="abc";
    cout<<"By harshit"<<endl;
    cout<<findocc(s,part);
   
}