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
    int n;
    cout<<"Enter"
    cout<<solve(v,tar);
}