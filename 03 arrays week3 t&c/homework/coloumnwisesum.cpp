#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3];

    //Rowise
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        cin>>arr[i][j];
    }
    cout<<"\n";
//coloumn wise sum
int sum=0;
    for(int i=0;i<3;i++){ 
        sum=0;
        for(int j=0;j<3;j++)
        sum+=arr[j][i];
        cout<<sum<<" ";
    }
}