
#include<bits/stdc++.h>
using namespace std;
vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack<long long> st;
        st.push(-1);
        vector<long long> ans(arr.size());
        for(long long i=arr.size()-1;i>=0;i--){
        long long curr=arr[i];
        while((st.top()!=-1)&&(st.top()<=curr)){
            st.pop();
        }
        ans[i]=st.top();
        st.push(curr);
    }
    return ans;
    }