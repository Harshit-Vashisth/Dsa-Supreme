#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={10,3,2,5,6,9};
    for(int i=1;i<arr.size();i++){
        int j=i-1;
        int val=arr[i];
        for(;j>=0;j--){
            if(arr[j]>val)
                arr[j+1]=arr[j];
            else 
                break; 
         }
         arr[j+1]=val;
    }
    cout<<"Sorted array ;- ";
    for(auto s:arr)
    cout<<s<<" ";
}