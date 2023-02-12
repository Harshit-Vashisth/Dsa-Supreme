#include<iostream>
using namespace std;
bool search(int arr[],int k){
    for(int i=0;i<5;i++)
    if(arr[i]==k)
    return true;
return false;
}
int main(){

    //method 1
    int arr[5];
    for(int i=0;i<5;i++)
    cin>>arr[i];
    
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
cout<<endl;
if(search(arr,5))
cout<<"YES";
else
cout<<"nope";
cout<<endl;

}