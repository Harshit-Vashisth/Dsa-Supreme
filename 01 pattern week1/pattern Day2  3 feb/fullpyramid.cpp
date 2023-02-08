#include <iostream> 
using namespace std;
int main(){
int n=8;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n-i-1;j++)
    cout<<" ";
    for(int s=0;s<2*i+1;s++)
    cout<<"*";
    cout<<endl;
}

}
