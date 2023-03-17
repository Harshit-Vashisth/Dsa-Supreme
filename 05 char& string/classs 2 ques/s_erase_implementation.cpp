#include<bits/stdc++.h>
using namespace std;
    void findocc(string s,int n,string part){
        int i=0;
        while(i<s.size()-part.length()){
            if(s.substr(i,part.length())==part)
                {
                    int c=0;
                    while(c<part.length()){
                        s[c]=s[c+part.length()-1];
                    }
                }
            i++;
        }
    }
int main(){
    int n=0;
    string s="daacbaabcbc";
    string part="ab";
    cout<<"By harshit"<<endl;
    findocc(s,n,part);
    cout<<s;
    cout<<"per";
}