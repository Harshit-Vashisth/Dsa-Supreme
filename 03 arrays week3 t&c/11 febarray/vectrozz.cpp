#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

int main(){
    int arr[3][3];

    //Rowise
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        cin>>arr[i][j];
    }
    cout<<"\n\n the transpose is ";
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        cout<<arr[i][j];
        cout<<endl;
    }
}