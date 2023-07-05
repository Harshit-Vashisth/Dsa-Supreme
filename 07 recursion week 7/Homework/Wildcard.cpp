#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isMatch(string s,int si,string p,int pi){
        //base case
        if(si>=s.size()&&pi>=p.size())
        return true;
        if(si>=s.size()&&pi<p.size()){
            while(pi<p.size()){
                if(p[pi]!='*')
                return false;
                pi++; 
            }
             return true;
        }


        if((s[si]==p[pi])||(p[pi]=='?'))
            return isMatch(s,si+1,p,pi+1);
        if(p[pi]=='*'){
            bool a= isMatch(s,si,p,pi+1);
            bool b= isMatch(s,si+1,p,pi);
            return a||b;
        }
        return false;
    }

    bool isMatch(string s, string p) {
        return isMatch(s,0,p,0);
    }
};