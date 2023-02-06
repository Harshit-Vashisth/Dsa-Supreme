#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        for(int j=0;j<n-i-1;j++)
        cout<<" ";

        //star1
        for(int j=0;j<2*i+1;j++){
            if(j==0||i==n-1||j==2*i||i==0)
            cout<<"*";
            else
            cout<<" ";
        }


        cout<<endl;
    }
}