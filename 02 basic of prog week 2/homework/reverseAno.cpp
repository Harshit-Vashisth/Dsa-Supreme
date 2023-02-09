#include <iostream>
using namespace std;
int reverse(int n){
    int s=0;
    while(n){
        int a=n%10;
        s=s*10+a;
        n=n/10;
    }
    return s;
}
int main(){
    int a;
    cin>>a;
    cout<<reverse(a);
    return 0;
}