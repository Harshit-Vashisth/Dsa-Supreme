#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> s;
    cout<<s.size()<<endl ; //size is 0

    int ans=(sizeof(s)/sizeof(int));

    int n;
    cin>>n;
    vector<int> arr(n,5);//all 10 values will be initialise with 5 
    for(int i=0;i<n;i++)
    cout<<arr[i];
    cout<<endl; 
 
 vector<int> a{1,32,4,3};
  for(int i=0;i<4;i++)
    cout<<a[i];
    cout<<endl; 

 vector<int> at={1,32,4,3};
  for(int i=0;i<4;i++)
    cout<<at[i];
    cout<<endl; 
}