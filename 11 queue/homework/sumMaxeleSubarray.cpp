#include<bits/stdc++.h>
using namespace std;
vector<int> solve(int arr[],int k,int n){
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
}
int main(){
    int arr[]={1,2,3,4,5,3,2,1};
    int k=2,n=8;
    vector<int> ans=solve(arr,n,k);
    int sum=0;
    for(auto i: ans)
        sum+=i;
    cout<<sum;
}