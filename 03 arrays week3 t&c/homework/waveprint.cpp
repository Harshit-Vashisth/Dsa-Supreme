#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> v;
    for(int i=0;i<mCols;i++){
        if(i&1){
            for(int j=nRows-1;j>=0;j--)
            v.push_back(arr[j][i]);
        }
        else{
            for(int j=0;j<nRows;j++)
            v.push_back(arr[j][i]);
        }
    }
    return v;
}
