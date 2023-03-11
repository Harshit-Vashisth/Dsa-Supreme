#include<bits/stdc++.h>
using namespace std;
int power(int n,int val){
    if(n==1)
    return val;
    val=val*2;
    return power(n-1,val);
}
int main(){
    int n;
    cin>>n;
    cout<<power(n,2);
    return 0;
}