#include<iostream>
using namespace std;
int main(){

    //method 1
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
    cout<<endl;

    //method2
    int v[]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    cout<<v[i]<<" ";

cout<<endl;

    //method 3
    int k[5];
    for(int i=0;i<5;i++)
    cin>>k[i];
    for(int i=0;i<5;i++)
    cout<<k[i]<<" ";
   

   int a;
   int gg[a];///bad parctise cause the size of array is limited
} 