#include <iostream>
using namespace std;

int main(){
    int n,k1=3,k2=0;
    cin>>n;
    for(int i =0;i<n;i++){
        //star1
        for(int j=0;j<i+1;j++){
            cout<<k1+i;
            k2=k1+i;
        }
        cout<<endl;
    }
    k2--;
       for(int i =0;i<n;i++){
        //star1
        for(int j=0;j<n-i-1;j++){
            cout<<k2;
        }
        k2--;
        cout<<endl;
    }
    
}
