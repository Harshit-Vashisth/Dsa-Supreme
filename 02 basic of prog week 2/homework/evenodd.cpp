#include <iostream>
using namespace std;
void check(int n){
    if(n%2==0)
    cout<<"Even";
    else
    cout<<"ODD";
}
int main(){
    int a;
    cin>>a;
    check(a);
    return 0;
}