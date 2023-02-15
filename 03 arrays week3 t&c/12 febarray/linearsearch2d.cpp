#include<bits/stdc++.h>
using namespace std;
bool search(int arr[][3],int k){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==k)
            return true;
        }
    }
    return false;
}
int main(){
    int arr[3][3];
    //Rowise
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        cin>>arr[i][j];
    }
    cout<<search(arr,4);

    }
