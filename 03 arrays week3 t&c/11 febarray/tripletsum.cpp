#include<bits/stdc++.h>
#include<limits>
#include<vector>

using namespace std;


void triplet(vector<int> a,int s){
    vector<int> ans;
    for(int i=0;i<a.size()-2;i++){
        for(int j=i+1;j<a.size()-1;j++)
        {
            for(int z=j+1;z<a.size();z++)
            if(a[i]+a[j]+a[z]==s){
                cout<<a[i]<<a[j]<<a[z]<<" ";
        }
        }
    }
}

int main(){
int n=0;
cout<<"Enter the number of elements"<<endl;
cin>>n;
    //method 1
   vector<int> a(n);
 
    for(int i=0;i<n;i++)
    cin>>a[i];
   
    triplet(a,10);
cout<<endl;

}