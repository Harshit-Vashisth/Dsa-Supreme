#include<bits/stdc++.h>
using namespace std;
    int myqrt(int x) {
       int ans=0;
       if(x==0 || x==1)
       return x;
       
       int s=0,e=x,mid=0;
       while(s<e){
           mid=s+(e-s)/2;
           if(x/mid>=mid)
           {
               ans=mid;
               s=mid+1;
           }
           else
           e=mid;
       }
       return ans;
    }
    double precision(double x,int prec,int n){
        double step=0.1;
        for(int i=0;i<prec;i++){
            for(double j=x;j*j<=n;j+=step){
                x=j;
            }
            step=step/10;
        }
        return x;
    }
int main(){
    int n,prec;
    cout<<"Enter the number for square root"<<endl;
    cin>>n;
    double s=(double)myqrt(n);
    cout<<"Enter the precision"<<endl;
    cin>>prec;
    cout<<"\n The square root of a -> "<<precision(s,prec,n);
}