#include<bits/stdc++.h>
using namespace std;
int minelement(vector<int> v,int i,int& mini,int n){
    if(i>=n)
    return mini;
    mini=min(mini,v[i]);
    return minelement(v,i+1,mini,n);
}
int main(){
    int n;
    cout<<"Enter the number of element "<<endl;
    cin>>n;
    vector<int> v;
    while(n--){
        int h;
        cin>>h;
    v.push_back(h);}
    int mini=INT_MAX;
   cout<<"Min element is :- "<<minelement(v,0,mini,v.size());
   
}