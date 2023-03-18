#include<bits/stdc++.h>
using namespace std;
    void merge(vector<int>& arr,int s,int e){
        int mid=s+(e-s)/2;
        int len1=mid-s+1;
        int len2=e-mid;
        vector<int> left;
        vector<int> right;
        int k=s;
        for(int i=0;i<len1;i++){
            left[i]=arr[k];
            k++;}
            k=mid+1;
            for(int i=0;i<len2;i++){
            right[i]=arr[k];
            k++;}

            int i=0,j=0,m=s;
            while(i<len1&&j<len2){
                if(left[i]<right[j])
                    arr[m++]=left[i++];
                else
                    arr[m++]=right[j++];
            }
            while(i<len1)
                arr[m++]=left[i++];

        while(j<len2)
            arr[m++]=right[j++];
    }
    
    void mergesort(vector<int> &arr,int s,int e){
        if(s>=e)
        return;

        int mid=s+(e-s)/2;
        //left
        mergesort(arr,s,mid);
        mergesort(arr,mid+1,e);
        merge(arr,s,e);
    }
int main(){
    vector<int> arr={1,4,5,9,10,6,11,3,2};
   cout<<"Running";
    mergesort(arr,0,arr.size()-1);
    cout<<"Running";
   for(auto i:arr)
    cout<<i<<" ";
}