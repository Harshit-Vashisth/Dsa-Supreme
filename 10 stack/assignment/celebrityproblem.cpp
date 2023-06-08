#include<bits/stdc++.h>
using namespace std;
int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int> st;
        for(int i=0;i<n;i++)
            st.push(i);
            
        while(st.size()!=1)
        {
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            if(M[a][b])
            {
                st.push(b);
            }
            else
            st.push(a);
        }
        int no=st.top();
        st.pop();
        
        //check for the m
        for(int i=0;i<n;i++){
            if(M[no][i]!=0)
            return -1;
        }
        for(int i=0;i<n;i++){
            if(M[i][no]==0&&i!=no)
            return -1;
        }
        return no;
    }