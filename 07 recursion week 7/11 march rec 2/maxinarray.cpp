#include<bits/stdc++.h>
using namespace std;
int maxelement(vector<int> v,int i,int& maxi,int n){
    if(i>=n)
    return maxi;
    maxi=max(maxi,v[i]);
    return maxelement(v,i+1,maxi,n);
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
    int maxi=INT_MIN;
   cout<<"Max element is :- "<<maxelement(v,0,maxi,v.size());
   
}
//rev 1