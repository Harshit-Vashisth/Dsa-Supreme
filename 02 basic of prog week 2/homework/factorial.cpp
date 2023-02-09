#include <iostream>
using namespace std;
char grade(int n){
    if(n>=90&&n<=100)
    return 'A';
    else if( n>60 && n<90)
    return 'B';
    else
    return 'C';
}
int main(){
    int a;
    cin>>a;
    cout<<grade(a);
    return 0;
}