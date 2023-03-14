#include<bits/stdc++.h>
using namespace std;
bool comp(string a,string b){
    if(a.length()!=b.length())
    return false; 
    int j=0;
    for(int i=0;i<a.length();i++){
        if(a[i]!=b[j])
        return false;
        else 
        j++;
    }
    return true;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(comp(s1,s2)==1)
        cout<<"They are same"<<endl;
    else
        cout<<"They are not same"<<endl;
}