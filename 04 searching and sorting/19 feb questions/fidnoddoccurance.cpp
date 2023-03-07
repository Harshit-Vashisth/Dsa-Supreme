#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> arr)//dividend and divisor
{
    int s=0,e=arr.size()-1,mid=0;
    while(s<=e){
        mid=s+(e-s)/2;
        if(s==e)
        return arr[s];
        if(mid%2==0){
        if(arr[mid]==arr[mid+1])
        s=mid+2;
        else
        e=mid;
        }
        else{
            if(arr[mid]==arr[mid-1])
            s=mid+1;
            else 
            e=mid-1;
        }
    }
    return -1;
    }
int main(){
    vector<int> arr={1,1,2,2,3,3,4,8,8,55,55,4,4};
    cout<<"By harshit"<<endl;
    int n=solve(arr);
    cout<<"The odd occuring number  is "<<n<<endl;
    
}