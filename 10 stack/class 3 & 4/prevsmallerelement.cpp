#include<bits/stdc++.h>
using namespace std;

vector<int> prevsmaller(vector<int> &v){
    stack<int> st;
    st.push(-1);
    vector<int> ans(st.size());
    for(int i=0;i<v.size();i++){
        while(st.top()>v[i]){
            st.pop();
        }
        ans[i]=st.top();
        st.push(v[i]);
    }
    return ans;
}
void print(vector<int> ans){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(6);
    v.push_back(1);
    vector<int> ans=prevsmaller(v);
    print(ans);
}