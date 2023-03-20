#include<bits/stdc++.h>
using namespace std;
void remove(string& s,string seq,int pos){
    if(pos==string::npos)
    return ;
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
    int pos=s.find(seq);
    remove(s,seq,pos);
    cout<<s;
}