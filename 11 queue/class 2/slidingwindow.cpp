#include<bits/stdc++.h>
using namespace std;

void solve(int arr[],int n, int k ) {
       queue<int> q;
       for(int i=0;i<k;i++){
        if(arr[i]<0)
        q.push(i);
       }
       for(int i=k;i<n;i++){
        if(q.empty())
                cout<<'0'<<" ";
        else    
            cout<<arr[q.front()]<<" ";

        if(!q.empty()&&(i-q.front()>=k))
                q.pop();
        if(arr[i]<0)
                q.push(i);
       }
       if(q.empty()) cout<<'0'<<" ";
       else
                cout<<arr[q.front()]<<" ";
}
int main() {
  int arr[] = {12,-1,-7,8,-15,30,16,28};
  int size = 8;
  
  int k = 3;

  solve(arr,size,k);
  return 0;
}