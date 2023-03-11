#include<bits/stdc++.h>
using namespace std;
void print(vector<int> v,int i,int n){
    if(i>=n)
    return;
    print(v,i+1,n);
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
   print(v,0,v.size());
   
}