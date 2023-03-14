#include<bits/stdc++.h>
using namespace std;
bool checkpalin(char ch[])
{
    int i=0,j=strlen(ch)-1;
    while(i<=j)
    {
        if(ch[i]==ch[j])
        {
            i++;j--;
        }
        else 
        return false;
    }
    return true;
}
int main(){
    char ch[100];
    cout<<"Enter the string to be check"<<endl;
    cin.getline(ch,20);
    cout<<checkpalin(ch);

}