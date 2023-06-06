#include<bits/stdc++.h>
using namespace std;
class MinStack {
public:
vector<pair<int,int>> st;
    MinStack() {
    }
    
    void push(int val) {
        pair<int,int> p;
        if(st.empty())
        {
            p.first=val;
            p.second=val;
            st.push_back(p);
        }
        else
        {
            p.first=val;
            p.second=min(val,st.back().second);
            st.push_back(p);
        }
    }
    
    void pop() {
        st.pop_back();
    }
    int top() {
        return st.back().first;
    }
    int getMin() {
        return st.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */