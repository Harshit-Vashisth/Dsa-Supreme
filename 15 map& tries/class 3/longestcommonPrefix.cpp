#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        string ans="";
        for(int i =0;i<str[0].length();i++){
            char ch=str[0][i];
            bool match=true;

            for(int j=1;j<str.size();j++){
                if(str[j].size()<i || ch!=str[j][i]){
                    match=false;
                    break;
                }
            }
            if(match==false)
                break;
            else
                ans.push_back(ch);
        }
        return ans;
    }
};