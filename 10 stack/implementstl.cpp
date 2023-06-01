#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    st.pop();
    cout<<"Top element is "<<st.top()<<endl;
    cout<<"Size of stack"<<st.size()<<endl;
    cout<<"Empty or not "<<st.empty()<<endl;
}