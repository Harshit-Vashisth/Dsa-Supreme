#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int tickets(vector<int>& days,vector<int>& costs,int i){
        if(i>=days.size())
            return 0;
        
        int cost1=costs[0]+tickets(days,costs,i+1);

        int passend=days[i]+7-1;
        int j=i;
        while(j<days.size()&&days[j]<=passend)
            j++;
        int cost7=costs[1]+tickets(days,costs,j);

        passend=days[i]+30-1;
        j=i;
        while(j<days.size()&&days[j]<=passend)
            j++;
        int cost30=costs[2]+tickets(days,costs,j);

        return min(cost1,min(cost7,cost30));
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        return tickets(days,costs,0);
    }
};