#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

void transpose(int arr[][3])
{
    for(int i=0;i<3;i++){
        for(int j=0;j<i;j++)
        swap(arr[i][j],arr[j][i]);
    }
}
int main(){
    int arr[3][3];

    //Rowise
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        cin>>arr[i][j];
    }
    cout<<"\n\n the transpose is \n";
    transpose(arr);
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}