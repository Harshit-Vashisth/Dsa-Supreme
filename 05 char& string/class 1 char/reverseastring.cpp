#include<bits/stdc++.h>
using namespace std;
void reverse(char name[]){
    int n=strlen(name);
    int i=0,j=n-1;
    while(i<=j){
        swap(name[i],name[j]);
        i++;j--;
        }
}
int main(){
    char c[100];
    cin.getline(c,30);
    
    reverse(c);
    cout<<c;

}