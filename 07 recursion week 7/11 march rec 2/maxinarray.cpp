#include<bits/stdc++.h>
using namespace std;
int maxelement(vector<int> v,int i,int n){
    if(i>=n)
    return;
    maxelement(v,i+1,n);
    cout<<v[i]<<" ";
   
}
int main(){
    int n;
    cout<<"Enter the number to be printed "<<endl;
    cin>>n;
    vector<int> v;
    while(n--){
        int h;
        cin>>h;
    v.push_back(h);}
   cout<<maxelement(v,0,v.size());
   
}