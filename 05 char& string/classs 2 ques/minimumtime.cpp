#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMinDifference(vector<string>& time) {
        vector<int> mi;
        //step 1 time->min
        for(int i=0;i<time.size();i++)
        {
            string cur=time[i];

            int hr=stoi(cur.substr(0,2));
            int minute=stoi(cur.substr(3,2));
            int tot=hr*60+minute;
            mi.push_back(tot);
        }

        //step 2 sort
        sort(mi.begin(),mi.end());

        //step 3 difference min
        int mini=INT_MAX;
        for(int i=0;i<mi.size()-1;i++){
            int diff=mi[i+1]-mi[i];
            mini=min(diff,mini);
        }
        int last1=(mi[0]+1440)-mi[mi.size()-1];
        int last2=mi[mi.size()-1]-mi[0];
        int l=min(last1,last2);
        mini=min(mini,last1);

        return mini;
   }
};