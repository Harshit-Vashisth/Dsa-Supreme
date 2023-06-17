#include<bits/stdc++.h>
using namespace std;
void reverseK(queue<int> &q,int k){
    int n=q.size();
    if(k==0||k==n-1)
        return;
    stack<int> st;
    int count=0;
    while(!q.empty()&&count!=k){
        int ele=q.front();
        q.pop();
        st.push(ele);
        count++;
    }
    while(!st.empty()&&(n-k)!=0){
        int temp=st.top();
        st.pop();
        q.push(temp);
    }
    count=0;
    while(!q.empty()&&(count!=(n-k))){
        int temp=q.front();
        q.pop();
        q.push(temp);
        count++;
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    cout<<q.front()<<endl;
    reverseK(q,3);
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
}