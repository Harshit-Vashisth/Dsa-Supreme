#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    return (fibonacci(n-1)+fibonacci(n-2));
}
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<"The ith fibonacci term is "<<fibonacci(n);
    return 0;
}