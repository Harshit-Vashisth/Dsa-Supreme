#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numsq(int n){
          //base case
        if(n==0) return 1;
        if(n<0) return 0;
        int ans=INT_MAX;
        int i=1;
        int end=sqrt(n);
        while(i<=end){
            int pref=i*i;
            int num=1+numsq(n-pref);
            if(ans>num)
                ans=num;
            i++;
        }
        return ans;
    }
    int numSquares(int n) {
        return numsq(n)-1;
    }
};