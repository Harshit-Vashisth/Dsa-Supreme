#include<bits/stdc++.h>
using namespace std;
bool occurance(string s,int i,char key,int n){
    if(i>=n)
    return false;
    if(s[i]==key)
    return true;
    return occurance(s,i+1,key,n);
}
int main(){
    char key;
    cout<<"Enter the String "<<endl;
    string s;
    cin>>s;
    
    cout<<"Enter the key"<<endl;
    cin>>key;
   cout<<"is char there :- "<<occurance(s,0,key,s.size());
   
}