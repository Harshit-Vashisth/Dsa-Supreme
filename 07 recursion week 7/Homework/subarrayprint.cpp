#include<bits/stdc++.h>
using namespace std;
    void print(vector<int>& arr,int start,int end){
        if(end==arr.size())
            return;
        for(int i=start;i<=end;i++)
            cout<<arr[i];
            cout<<endl;
            print(arr,start,end+1);
    }
    void printsub(vector<int>& arr){
        for(int start=0;start<arr.size();start++){
            int end=start;
            print(arr,start,end);
        }
    }

int main(){
    vector<int> arr={1,2,3,4,5};
    printsub(arr);
}