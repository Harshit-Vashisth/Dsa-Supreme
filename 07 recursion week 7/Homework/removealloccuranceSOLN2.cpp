#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
void remove(string& s,string seq){
    
    int found=s.find(seq);
    if(found!=string::npos)// no position
    {//part string has been location
    // ek left string ek right string  and left _ right ko s me 
    string left=s.substr(0,found);//strat pos , no of char 
    string right=s.substr(found+seq.size(),s.size());
    s=left+right;
    remove(s,seq);}
    else
    {
        //all the occurances of part has been remove
        return;
    }
}
    string removeOccurrences(string s, string part) {
        int pos=s.find(part);
        remove(s,part);
        return s;
    }
};