#include<bits/stdc++.h>
using namespace std;

int main(){
    //method 1
    char ch[10];
    for(int i=0;i<10;i++)
    cin>>ch[i];
    cout<<ch;

    //method 2
    char name[100];
    cin>>name;
    cout<<name;

    //hwo to input string with space also 
    char c[100];
    cin.getline(c,30);
    cout<<c;
}