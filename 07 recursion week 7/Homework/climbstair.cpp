#include<bits/stdc++.h>
using namespace std;
int climb(int n){
    if(n==0||n==1)
    return 1;
    return climb(n-1)+climb(n-2);
}
int main(){
    int n;
    cout<<"Enter the desination of top"<<endl;
    cin>>n;
    cout<<climb(n);
}