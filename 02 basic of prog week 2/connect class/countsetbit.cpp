#include<iostream>
using namespace std;
int main(){
    int n=0,c=0;
    cin>>n;
    while(n){
        if(n&1)
            c++;
        n=n>>1;
    }
    cout<<"Set bits are "<<c;
} 