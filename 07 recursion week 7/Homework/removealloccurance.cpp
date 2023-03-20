#include<bits/stdc++.h>
using namespace std;
string remove(string s,string seq,int pos){
    if(pos==string::npos)
    return s;
    s.erase(pos,seq.length());
    pos=s.find(seq);
    remove(s,seq,pos);
}
int main(){
    string s,seq;
    cout<<"Enter the string "<<endl;
    cin>>s;
    cout<<"Seq to remove "<<endl;
    cin>>seq;
    remove(s,seq,s.find(seq));
}