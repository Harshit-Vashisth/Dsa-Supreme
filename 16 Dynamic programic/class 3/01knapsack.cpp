#include<bits/stdc++.h>
using namespace std;
// in dp whenu go right to left u feel it more easy 
int usingrecursion(int weight[],int value[],int index,int capacity){
    if(index==0){
        if(weight[0]<=capacity)
            return value[0];
        else
            return 0;
        }
        int include=0;
        if(weight[index]<=capacity)
            include=value[index]+usingrecursion(weight,value,index-1,capacity-weight[index]);
        
        int exclude=usingrecursion(weight,value,index-1,capacity);
        int ans=max(include,exclude);
        return ans;
}
int getMaxval(int weight[],int value[],int index,int capacity){
    return usingrecursion(weight,value,index-1,capacity);
}
int main(){
    int weight[]={4,5,1};
    int value[]={1,2,3};
    int capacity=4;
    int index=3;
    cout<<getMaxval(weight,value,index,capacity);
}