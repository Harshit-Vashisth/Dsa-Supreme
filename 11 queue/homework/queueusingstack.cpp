#include<bits/stdc++.h>
using namespace std;
class MyQueue {
public:
 stack<int> st;
    MyQueue() {
       
    }
    void push(int x) {
        if(st.empty()){
            st.push(x);
            return;}
            int ele=st.top();
            st.pop();
            push(x);
            st.push(ele);
    }
    
    int pop() {
        if(st.empty())
        return -1;
        int ele=st.top();
        st.pop();
        return ele;
    }
    
    int peek() {
        return st.top();
    }
    
    bool empty() {
        if(st.empty())
            return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */