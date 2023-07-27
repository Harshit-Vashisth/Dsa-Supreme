#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int spaceOptimise(string text1,string text2){
        vector<int> curr(text2.length()+1,0);
        vector<int> next(text2.length()+1,0);
        for(int i=text1.length()-1;i>=0;i--){
            for(int j=text2.length()-1;j>=0;j--){
                    int ans;
                    if(text1[i]==text2[j])
                        ans=1+next[j+1];
                    else
                        ans=max(curr[j+1],next[j]);
                    curr[j]=ans;
            }
            next=curr;
        }
        return next[0];
    }   
    int longestPalindromeSubseq(string s) {
        // lets just think of this quesiton in term of LcS 
        // palidrome means left and right should be same
        //what if we use 2 string one orginal 2nd rev and put longest common subseq logic simple
        string s1=s;
        reverse(s.begin(),s.end());
        string s2=s;
        return spaceOptimise(s1,s2);
    }
};