#include<bits/stdc++.h>
using namespace std;
void toupper(char ch[])
{
    for(int i=0;i<strlen(ch);i++){
        ch[i]=ch[i]-'a'+'A';
    }
}
int main(){
    char ch[100];
    cout<<"Enter the palindrome string to be check"<<endl;
    cin.getline(ch,20);
    toupper(ch);
     for(int i=0;i<strlen(ch);i++){
        cout<<ch[i]<<e
    }

}