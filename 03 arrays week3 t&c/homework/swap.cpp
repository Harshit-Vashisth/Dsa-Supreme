#include<bits/stdc++.h>
#include<limits>
#include<vector>
using namespace std;
void swap(int a,int b){
    int t=a;
    a=b;
    b=t;
    cout<<a<<" "<<b;
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
   
    swap(a[2],a[3]);

}