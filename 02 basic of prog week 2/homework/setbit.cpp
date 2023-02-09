#include <iostream>
using namespace std;
void reverse(int n){
    int s=0;
    while(n){
        int a=n%10;
        s=s*10+a;
        n=n/10;
    }
    cout<<s;
}
void  change(int n,int count){
 int s=0,c=0;
    while(n){
        if(c==count){
        s=s*10+!n;
        continue;
        }
        c++;
        int a=n%10;
        s=s*10+a;
        n=n/10;
        
    }
    reverse(s);
    
}
int main(){
    int a, c;
    cin>>a>>c;
   change(a,c);
    return 0;
}