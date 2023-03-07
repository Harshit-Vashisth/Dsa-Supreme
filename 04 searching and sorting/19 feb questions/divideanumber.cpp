#include<bits/stdc++.h>
using namespace std;
int solve(int div,int d)//dividend and divisor
{
    int s=0,e=abs(div),mid=0,ans=-1;
    while(s<=e){
        mid=s+(e-s)/2;
        if(abs(mid*d)<=abs(div))
        {
            ans=mid;
            s=mid+1;
        }
        else 
        e=mid-1;
    }
    if((div<0&&d<0)||(div>0&&d>0))
     return ans;
     else
     return ans*-1;
}
int main(){
    int div,d;
    cout<<"Enter the dividend"<<endl;
    cin>>div;
    cout<<"Enter the divisor"<<endl;
    cin>>d;
    int n=solve(div,d);
    cout<<"The number after dividing is "<<n;
}