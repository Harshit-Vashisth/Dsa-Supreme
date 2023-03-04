#include<bits/stdc++.h>
#include<vector>
int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int sum=0;
      int s=n*(n+1)/2;
      for(int i =0;i<array.size();i++)
      sum+=array[i];
      
      return s-sum;
    }