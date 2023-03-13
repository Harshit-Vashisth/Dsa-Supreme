#include<bits/stdc++.h>
using namespace std;
int getlen(char name[]){
    int l=0;
    int i=0;
    while(name[i]!='\0')
    {
        l++;i++;
    }
    return l;
}
int main(){
    char c[100];
    cin.getline(c,30);
    cout<<c;
    cout<<getlen(c);

}