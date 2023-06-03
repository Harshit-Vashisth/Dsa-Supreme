#include<bits/stdc++.h>

using namespace std;

void middle(stack<int> &st,int &size){
    if(st.empty()){
        cout<<"stack empty"<<endl;
        return;
    }
    if(size/2+1==st.size()){
        cout<<st.top();
        return;
    }
    int temp=st.top();
    st.pop();
    middle(st,size);
    st.push(temp);
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    st.push(80);
    st.push(90);
    int size=st.size();
    middle(st,size);
   
}