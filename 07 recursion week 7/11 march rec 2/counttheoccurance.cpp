#include<bits/stdc++.h>
using namespace std;
int occurance(string s,int i,char key,int& c,int n){
    if(i>=n)
    return c;
    if(s[i]==key)
    c++;
    return occurance(s,i+1,key,c,n);
}
int main(){
    char key;
    cout<<"Enter the String "<<endl;
    string s;
    cin>>s;
    int c=0;
    cout<<"Enter the key"<<endl;
    cin>>key;
   cout<<"count of key is :- "<<occurance(s,0,key,c,s.size());
   
}