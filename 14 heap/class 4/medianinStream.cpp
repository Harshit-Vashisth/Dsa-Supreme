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
void callmedian(double &median,priority_queue<int> &maxheap,priority_queue<int,vector<int>,greater<int>> &minheap, int element){
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
        case 1:
            if(element>maxheap.top()){
                minheap.push(maxheap.top());
                maxheap.pop();
                maxheap.push(element);
                median=(maxheap.top()+minheap.top())/2.0;
            }
            else{
                maxheap.push(element);
                median=(maxheap.top()+minheap.top())/2.0;
            }
        case -1:
    }}
int main(){
    int arr[10]={2,4,5,10,1,40,4,6,3,9};
    int n=12;
    double median=0;
    priority_queue<int> maxheap;
    priority_queue<int,vector<int> , greater<int>> minheap;
    for(int i=0;i<n;i++){
        int ele=arr[i];
         callmedian(median,maxheap,minheap,ele);
         cout<<median;
    }
}