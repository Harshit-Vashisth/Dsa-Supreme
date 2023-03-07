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
     return ans;
}
double precison(int div,double val,int prec){
    double step=0.1;
    double ans;
    for(int i=0;i<prec;i++){
        for(double j=val;j*val<=div;j+=step){
            ans=j;
        }
        step=step/10;
    }
    return ans;
}
int main(){
    int div,d,prec;
    cout<<"Enter the dividend"<<endl;
    cin>>div;
    cout<<"Enter the divisor"<<endl;
    cin>>d;
    int n=solve(div,d);
    cout<<"The number after dividing is "<<n<<endl;
    double val=(double)n;
    cout<<"Enter the precison to be achieved"<<endl;
    cin>>prec;
    cout<<"With precison"<<precison(div,val,prec);
}