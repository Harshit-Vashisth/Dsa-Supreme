#include<iostream>
#include<limits.h>
using namespace std;
int smax(int arr[]){
    int mini=INT_MAX;
    for(int i=0;i<5;i++)
    if(arr[i]<mini)
    mini=arr[i];
return mini;
}
int main(){

    //method 1
    int arr[5];
    for(int i=0;i<5;i++)
    cin>>arr[i];
    
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
cout<<endl;
cout<<smax(arr);

}