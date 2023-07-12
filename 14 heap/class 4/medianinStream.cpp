#include<bits/stdc++.h>
using namespace std;
int sigum(int a,int b){
    if(a==b)
        return 0;
    if(a>b)
        return 1;
    if(a<b)
        return -1;
}
int median(double &median,priority_queue<int> &maxheap,priority_queue<int,vector<int>,greater<int>> &minheap, int element){
    switch(sigum(minheap.size(),maxheap.size())){
        case 0:
            if(element>median){
                minheap.push(element);
                median=minheap.top();
            }
            else{
                maxheap.push(element);
                median=maxheap.top();
            }
    }
}