#include <iostream>
using namespace std;
void prime(int n){
    int c=0;
    for(int i=2;i<n;i++)
    if(n%i==0)
    c=1;
    if(c!=0)
    cout<<"Not prime";
    else
    cout<<"Prime";
}

int main(){
    int a;
    cin>>a;
    prime(a);
    return 0;
}