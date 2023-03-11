#include<bits/stdc++.h>
using namespace std;
bool find(vector<int> v,int i,int key,int n){
    if(i>=n)
    return false;
    if(v[i]==key)
    return true;
    return find(v,i+1,key,n);
}
int main(){
    int n,key;
    cout<<"Enter the number of element "<<endl;
    cin>>n;
    vector<int> v;
    while(n--){
        int h;
        cin>>h;
    v.push_back(h);}
    cout<<"Enter the key"<<endl;
    cin>>key;
   cout<<"is number there :- "<<find(v,0,key,v.size());
   
}