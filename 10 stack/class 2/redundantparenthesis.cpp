#include<bits/stdc++.h>
using namespace std;
 void print(stack<char> st){
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
    }
    bool valid(string s) {
        stack<char> st;
        bool op=false;
        for(int i =0;i<s.length();i++){
            char ch=s[i];
            if(s[i]=='['||s[i]=='{'||s[i]=='('||s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='%')
                st.push(s[i]);
            else
            {
                
                if (s[i] < 'A' || s[i] > 'Z' && s[i] < 'a'|| s[i] > 'z'){
                    
                   
                    if((ch==')'||ch==']'||ch=='}')&&!st.empty()){
                       
                        while(st.top()=='+'||st.top()=='*'||st.top()=='-'||st.top()=='/'||st.top()=='%')
                        {
                            print(st);
                              cout<<endl<<ch<< "  Dg  "<<st.top();
                            op=true;
                            st.pop();
                        }
                        if(((st.top()=='('&&ch==')')||(st.top()=='['&&ch==']')||(st.top()=='{'&&ch=='}'))&&op==true){
                            
                             st.pop();
                             op =false;
                             cout<<"\nSF\n";
                             print(st);
                             cout<<"\n";}
                    else
                    return false;
                    }
                    else
                    return false;
                }
            }
        }
        
        
        if(st.empty())
        return true;
        else
        return false;
    }
       
int main(){
    string s="(a/(a*a+b))";
    cout<<s<<endl;
     
    if(valid(s))
    cout<<"It is valid";
    else 
    cout<<"Its not valid";
}