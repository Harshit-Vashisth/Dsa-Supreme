#include<iostream>
#include<limits.h>
using namespace std;
void rev(int arr[]){
    
    int s=0,e=4;
    while(s<=e){
       swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
int main(){

    //method 1
    int arr[5];
    for(int i=0;i<5;i++)
    cin>>arr[i];
    
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
cout<<endl;
rev(arr);

for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";  
}