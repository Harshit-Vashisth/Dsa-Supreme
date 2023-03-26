#include<bits/stdc++.h>
using namespace std;
void issafe(vector<vector<int>> board,int row,int col,int n){
    //left row
}
void solve(vector<vector<int>> board,int col,int n){
    if(col>=n){
        print(board,n);
    return;
    }

    for(int row=0;row<n;row++){
        if(issafe(board,row,col,n)){
            board[row][col]=1;
            solve(board,col+1,n);
            board[row][col]=0;
            }
    }
}
int main(){
    int n=4;
    vector<vector<int>> board(n,vector<int>(n,0));
    solve(board,0,n);
}