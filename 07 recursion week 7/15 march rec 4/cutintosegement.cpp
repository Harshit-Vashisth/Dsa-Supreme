#include<bits/stdc++.h>
using namespace std;
int solve(int n,int x,int y,int z){
    if(n==0)
        return 0;
    if(n<0)
        return INT_MIN;
    int a=solve(n-x,x,y,z)+1;
    int b=solve(n-y,x,y,z)+1;
    int c=solve(n-z,x,y,z)+1;
    return max(a,max(b,c));
}
int main(){
    //you have to tell the min number of eleements required to reach target sum 
    int n,x,y,z;
    cout<<"Enter the length of rod "<<endl;
    cin>>n;
    cout<<"Enter the possible cuts"<<endl;
    cin>>x>>y>>z;
    cout<<solve(n,x,y,z);
}