#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

int mini(int arr[][3]){
    int k=INT_MAX;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        if(arr[i][j]<k)
        k=arr[i][j];
    }
    return k;
}
int maxi(int arr[][3]){
    int k=INT_MIN;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        if(arr[i][j]>k)
        k=arr[i][j];
    }
    return k;
}
int main(){
    int arr[3][3];

    //Rowise
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        cin>>arr[i][j];
    }
    cout<<"\n";
    cout<<"Minimum element is"<<mini(arr);
    cout<<"Maximum element is"<<maxi(arr);
}