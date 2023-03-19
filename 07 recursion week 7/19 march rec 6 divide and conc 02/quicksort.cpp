#include<bits/stdc++.h>
using namespace std;
int findpivot(vector<int>& arr,int s,int e){
    int piv=s;
    int pivele=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivele)
            count++;
    }
    int i=s,j=e;
    piv=s+count;
    swap(arr[s+count],arr[piv]);
    while(i<piv&&j>piv){
        while(arr[i]<=pivele)
        i++;
        while(arr[j]>pivele)
        j--;
    }
    return piv;
}
void quicksort(vector<int>& arr,int s,int e){
    if(s>=e)
    return;
    //partion 
    int piv=findpivot(arr,s,e);
    //left
    quicksort(arr,s,piv-1);
    //right
    quicksort(arr,piv+1,e);
}
int main(){
    vector<int> arr={9,6,5,3,1,7,4};
    int n=7;
    quicksort(arr,0,n);
    for(auto i:arr)
    cout<<i<<" ";
}