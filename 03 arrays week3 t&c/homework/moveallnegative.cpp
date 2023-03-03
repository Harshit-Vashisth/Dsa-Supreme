#include<bits/stdc++.h>
using namespace std;

void move(vector<int> arr,int n){
    int l=0,h=n-1;
    while(l<h){
        if(arr[l]<0)
        l++;
        else if(arr[h]>0)
        h--;
        else
        swap(arr[l],arr[h]);
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    int k,t;
    cout<<"Enter the value";
    for(int i =0;i<n;i++){
        cin>>k;
        v.push_back(k);
    }
    move(v,n);
    return 0;
}