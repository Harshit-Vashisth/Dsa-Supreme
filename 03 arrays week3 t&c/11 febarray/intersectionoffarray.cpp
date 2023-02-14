#include<bits/stdc++.h>
#include<limits>
#include<vector>

using namespace std;

void print(vector<int> ans){
    for(auto i: ans)
    cout<<i;
}

void intersect(vector<int> a,vector<int> b){
    vector<int> ans;
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++)
        if(b[j]==a[i]){
            ans.push_back(a[i]);
            b[j]=INT_MIN;//cause by this we can handle the +ve + ve integers also 
        }
    }
    print(ans);
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
    intersect(a,b);
cout<<endl;

}