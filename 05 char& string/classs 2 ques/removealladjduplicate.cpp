#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeDuplicates(string s) {
        string ans="";
        int i=0;
       while(i<s.length()){
           if(ans.length()>0){
            if(ans[ans.length()-1]==s[i])
            ans.pop_back();
            else
            ans.push_back(s[i]);
            }
             else
            ans.push_back(s[i]);
            i++;
        }
        return ans;
    }
};

//MEHTOD 2
class Solution {
public:
    string removeDuplicates(string s) {
        string ans="";
        int i=0;
       while(i<s.length()){
           
            if(ans.length()>0&&ans[ans.length()-1]==s[i])
            ans.pop_back();
            else
            ans.push_back(s[i]);
           i++;
        }
        return ans;
    }
};