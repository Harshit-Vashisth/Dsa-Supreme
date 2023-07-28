#include<bits/stdc++.h>
using namespace std;
int solverec(vector<vector<int>>& envelopes,int prev,int curr){
        if(curr>=envelopes.size()){
            return 0;
        }
        int include=0;
        if(prev==-1||((envelopes[curr][0]>envelopes[prev][0])&&envelopes[curr][1]>envelopes[prev][1]))
            include=1+solverec(envelopes,curr+1,curr);
        
        //exclude
        int exclude=solverec(envelopes,curr+1,prev);
        return max(include,exclude);
    }
    int maxEnvelopes(vector<vector<int>> envelopes) {
        
        sort(envelopes.begin(),envelopes.end());
        int prev=-1;
        int curr=0;
        return solverec(envelopes, prev, curr);
         
    }
    int main(){
        vector<vector<int>> arr={{5,4},{6,4},{6,7},{2,3}};
        cout<<maxEnvelopes(arr);
    }