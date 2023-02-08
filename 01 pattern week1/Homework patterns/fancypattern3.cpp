#include <iostream>
using namespace std;

int main(){
    int n,k1=3,k2=0;
    cin>>n;
    int c=1;
    for(int i =0;i<n;i++){
        //star1
        for(int j=0;j<i+1;j++){
            
              cout<<c;
              if(i!=j)
              cout<<"*";
              c++;
        }
        cout<<endl;
    }
    int k=7;
    c=k;
    for(int i=0;i<n;){
        
        if(i==n-1){
        cout<<"1";break;}
        
        for(int j=0;j<n-i;j++){
            cout<<c;
            if(j!=n-i-1)
            cout<<"*";
            c++;
        }
        i++;
        c=k-((2*i)+1);
        cout<<endl;
    }
}
