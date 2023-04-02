#include<bits/stdc++.h>
using namespace std;
    void print(vector<int>& arr,int i,int j){
        if(j>=arr.size())
            return;
        else if(i>j)
        print(arr,0,j+1);
        else
        {cout<<"[";
        for(int s=i;s<j;s++)
            cout<<arr[s]<<",";
        cout<<arr[j]<<"]"<<",";
        print(arr,i+1,j);}
    }
    void printsub()

int main(){
    vector<int> arr={1,2,3};
    print(arr,0,0);
}