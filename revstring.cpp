#include<bits/stdc++.h>
using namespace std;

void rev(string s){
    stack<char> st;
    for(int i =0;i<s.length();i++){
        st.push(s[i]);
    }
     for(int i =0;i<s.length();i++){
        s[i]=st.top();
        st.pop();
    }
}
void print(string s){
    cout<<"The string is "<<s<<endl;
}
int main(){
    string s="Harshit";
    rev(s);
    print(s);
}