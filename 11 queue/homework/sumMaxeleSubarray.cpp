#include<bits/stdc++.h>
using namespace std;
vector<int> solve(vector<int> &arr,int k,int n){
    vector<int> ans;
    deque<int> dq;
    int max=0;
    for(int i=0;i<k;i++)
    {
        while(!dq.empty()&&arr[i]>=arr[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }
    ans.push_back(arr[dq.front()]);
    for(int i=k;i<n;i++){
        if(i-dq.front()>=k)
            dq.pop_front();
        while(!dq.empty()&&arr[i]>=arr[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }
    ans.push_back(arr[dq.front()]);
    return ans;
}
int main(){
    vector<int> arr;
  
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(6);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(5);
    arr.push_back(1);

    int k=2,n=8;
    vector<int> ans=solve(arr,n,k);
    int sum=0;
    cout<<"DSNHD";
    for(auto i: ans)
        sum+=i;
    cout<<sum;
}