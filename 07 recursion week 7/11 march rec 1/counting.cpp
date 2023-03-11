#include <bits/stdc++.h>
using namespace std;
void printcount(int n){
    if(n==0)
    return ;
    cout<<n<<"  ";//reverse count
    printcount(n-1);
    cout<<n<<"  "; //Normal couting
}
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    printcount(n);
    return 0;
}