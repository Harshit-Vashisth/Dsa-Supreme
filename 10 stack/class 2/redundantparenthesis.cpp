#include<bits/stdc++.h>
using namespace std;

    bool valid(string s) {
        stack<char> st;
        for(int i =0;i<s.length();i++){
            char ch=s[i];
            if(s[i]=='['||s[i]=='{'||s[i]=='('||s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='%')
                st.push(s[i]);
            else
            {
                cout<<"S";
                if(!st.empty()){
                    bool op=false;
                    if(ch==')'||ch==']'||ch=='}'){
                        while(st.top()!='('||st.top()!='{'||st.top()!='[')
                        {
                            op=true;
                            st.pop();
                        }
                        if((st.top()=='('&&ch==')')||(st.top()=='['&&ch==']')||(st.top()=='{'&&ch=='}'))
                    st.pop();
                    else
                    return false;
                    }
                }
                else
                return false;
            }
        }
        if(st.empty())
        return true;
        else
        return false;
    }
int main(){
    string s="(a+b)";
    cout<<s<<endl;
     
    if(valid(s))
    cout<<"It is valid";
    else 
    cout<<"Its not valid";
}