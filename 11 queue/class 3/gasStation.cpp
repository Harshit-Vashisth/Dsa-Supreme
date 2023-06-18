#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start=0,difict=0,balance=0;
        for(int i =0;i<gas.size();i++){
            balance+=gas[i]-cost[i];
            if(balance<0){
                difict+=balance;
                balance=0;
                start=i+1;
            }
        }
        if(difict+balance>=0)
            return start;
        else return -1;
    }
};