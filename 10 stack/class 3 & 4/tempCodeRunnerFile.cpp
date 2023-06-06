vector<int> nextsmaller(vector<int> &v){
    stack<int> st;
    st.push(-1);
    vector<int> ans(v.size());
    for(int i=v.size()-1;i>=0;i--){
        int curr=v[i];
        while(st.top()>=curr){
            st.pop();
        }
        ans[i]=st.top();
        st.push(curr);
    }
    return ans;
}