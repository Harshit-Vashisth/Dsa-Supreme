#include <iostream>
using namespace std;
int sum(int n){
    int s=0;
    for(int i=2;i<=n;i+=2)
    s+=i;
    return s;
}
int main(){
    int a;
    cin>>a;
    cout<<sum(a);
    return 0;
}