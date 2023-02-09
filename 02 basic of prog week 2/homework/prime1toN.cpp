#include <iostream>
using namespace std;
void prime(int n){
    int c=0;
    for(int i=2;i<n;i++)
    if(n%i==0)
    c=1;
    if(c==0)
    cout<<n;
}
int main(){
    int a;
    cin>>a;
    for(int i=2;i<=a;i++)
    prime(i);
    return 0;
}