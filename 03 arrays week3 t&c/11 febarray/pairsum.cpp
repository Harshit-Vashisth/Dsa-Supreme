#include<bits/stdc++.h>
#include<vector>

using namespace std;



void sum(vector<int> a,vector<int> b,int s){
    vector<int> ans;
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++)
        if(b[j]+a[i]==s){
            cout<<a[i]<<" "<<b[j]<<" ||  ";
    }
}
}

int main(){
int n=0;
cout<<"Enter the number of elements"<<endl;
cin>>n;
    //method 1
   vector<int> a(n);
   vector<int> b(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cin>>b[i];
    sum(a,b,9);
cout<<endl;

}