#include<iostream>
#include<limits.h>
using namespace std;
int smax(int arr[]){\
    int maxi=INT_MIN;
    for(int i=0;i<5;i++)
    if(arr[i]>maxi)
    maxi=arr[i];
return maxi;
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