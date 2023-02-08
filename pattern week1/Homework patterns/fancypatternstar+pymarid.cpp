#include <iostream>
using namespace std;

int main(){
    int n,k1=3,k2=0;
    cin>>n;
    for(int i =0;i<n;i++){
        //star1
        for(int j=0;j<8-i;j++){
            cout<<"*";
        }
        for(int j=0;j<i+1;j++){
            cout<<i+1;
            if(i!=j)
            cout<<"*";
        }
        for(int j=0;j<8-i;j++)
        cout<<"*";
        cout<<endl;
    }
    
    
}
