#include<bits/stdc++.h>
using namespace std;
    void merge(vector<int>& arr,int s,int mid,int e){
        
    }
    void mergesort(vector<int> &arr,int s,int e){
        if(s>=e)
        return;

        int mid=s+(e-s)/2;
        //left
        mergesort(arr,s,mid);
        mergesort(arr,mid+1,e);
        merge(arr,s,mid,e);
    }
int main(){
    vector<int> arr={1,4,5,9,10,6,11,3,2};
   
    mergesort(arr,0,arr.size()-1);
   
}