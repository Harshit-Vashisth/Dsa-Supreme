#include<iostream>
using namespace std;
void change(int arr[]){
    arr[4]=10;
}
int main(){

    //method 1
    int arr[5];
    for(int i=0;i<5;i++)
    cin>>arr[i];
    
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";

change(arr);
cout<<endl;

    // the operations were performed on the acutall array not the copy of array     that is passs by refrence
    //changes are made in the actual values not on the copy

    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
    

    //int arr[10]={1,2,3,4}
    //agar array bda h aur values khali h toh remain space me 0 aajate h 



    cout<<endl;

} 