#include<bits/stdc++.h>
using namespace std;
void replace(char s[]){
    int n=strlen(s);
    for(int i=0;i<n;i++)
        if(s[i]==' ')
            s[i]='@';
}
int main(){
    char c[100];
    cin.getline(c,30);
    
    replace(c);
    cout<<c;

}