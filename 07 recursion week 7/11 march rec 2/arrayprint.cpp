#include<bits/stdc++.h>
using namespace std;
void print(vector<int> v,int i,int n){
    if(i>=n)
    return;
     cout<<v[i]<<" ";
    print(v,i+1,n);
   
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
   print(v,0,v.size());
   
}