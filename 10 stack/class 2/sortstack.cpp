#include<bits/stdc++.h>
using namespace std;
void solve(stack<int> &st,int tar){
        if(st.empty()){
        st.push(tar);
        return;
        }
        if(tar<=st.top()){
            st.push(tar);
            return;
        }
        int topele=st.top();
        st.pop();
        solve(st,tar);
        st.push(topele);
    }
    void sort(stack<int> &st){
        if(st.empty())
        return;
        int target=st.top();
        st.pop();
        sort(st);
        solve(st,target);
    }
    void print(stack<int> st){
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
    }
int main(){
    stack<int>st;
    st.push(20);
    st.push(10);
    st.push(30);
    st.push(60);
    st.push(70);
    st.push(50);
    print(st);
    cout<<endl;
    sort(st);
    print(st);
}