#include <iostream> 
using namespace std;
int main(){
int n;
cin>>n;

for(int i=0;i<n;i++)
{
    
for(int s=0;s<i+1;s++){
cout<<i+1;
if(i!=s)
cout<<"*";}
    cout<<endl;
}
for(int i=0;i<n;i++)
{
for(int s=0;s<n-i;s++){
cout<<n-i;
if(s!=n-i-1)
cout<<"*";
}
    cout<<endl;
}
}

