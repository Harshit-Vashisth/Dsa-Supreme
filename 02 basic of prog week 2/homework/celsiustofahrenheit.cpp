#include <iostream>
using namespace std;
int temp(int n){
    return (n*9/5)+32;
}
int main(){
    int a;
    cin>>a;
    cout<<temp(a);
    return 0;
}