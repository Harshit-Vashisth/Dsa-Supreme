#include<iostream>
using namespace std;
void count(int arr[],int k){
    int n1=0,n2=0;
    for(int i=0;i<5;i++)
    if(arr[i]==0)
    n1++;
    else
    n2++;
    cout<<n1<<n2;
}
int main(){

    //method 1
    int arr[5];
    for(int i=0;i<5;i++)
    cin>>arr[i];
    
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
cout<<endl;
count(arr,5);
cout<<endl;

}