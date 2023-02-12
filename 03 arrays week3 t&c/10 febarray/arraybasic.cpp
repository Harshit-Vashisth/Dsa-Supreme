#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    cout<<arr<<" they are same"<<&arr;  // they are related to pointers

    char a[106];
    bool arr[234];
    return 0;
} 