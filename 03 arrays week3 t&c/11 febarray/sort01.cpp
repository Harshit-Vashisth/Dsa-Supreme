#include<bits/stdc++.h>
#include<limits>
#include<vector>
using namespace std;
vector<int> sorting(vector<int> arr){
    int s=0,e=arr.size()-1,i=0;
    while(s<=e){
        if(arr[i]==0){
            swap(arr[i],arr[s]);
            s++;
            i++;
        }
        else
        {
            swap(arr[i],arr[e]);
            e--;
        }
    }
    return arr;
}
void print(vector<int> arr){
    for(auto i : arr)
    cout<<i<<" ";
}
int main(){
int n=0;
cout<<"Enter the number of elements"<<endl;
cin>>n;
    //method 1
   vector<int> a(n);
 
    for(int i=0;i<n;i++)
    cin>>a[i];
   
    a=sorting(a);
    cout<<endl;
print(a);
}