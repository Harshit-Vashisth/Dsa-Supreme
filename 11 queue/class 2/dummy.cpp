#include<bits/stdc++.h>
using namespace std;
void print(queue<int> q){
    while(!q.empty()){
        cout<<q.front();
        q.pop();
    }
}
void reverse(queue<int>& q){
    if(q.empty())
        return;
    int num=q.front();
    q.pop();
    reverse(q);
    q.push(num);
}
void reversek(queue<int>& q, int k){
    int n=q.size();
    if(q.size()<k)
        return;
    int count=0;
    stack<int> st;
    while(count<k){
        st.push(q.front());
        q.pop();
        count++;
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    while(count<n){
        int top=q.front();
        q.pop();
        q.push(top);
        count++;
    }
}
int main(){
    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(4);
    q.push(2);
    q.push(8);
    print(q);
    // reverse(q);
    // cout<<endl;
    // print(q);
    int k=3;
    reversek(q,k);
    cout<<endl;
    print(q);
}