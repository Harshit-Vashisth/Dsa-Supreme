#include<bits/stdc++.h>
using namespace std;

bool issafe(vector<vector<int>> board,int row,int col,int n){
    //left row i j-1
    int i=row,j=col;
    while(j>=0){
        if(board[i][j]==1)
        return false;
        j--;
    }
     //upper left row i-1 j-1
   i=row,j=col;
    while(j>=0&&i>=0){
        if(board[i][j]==1)
        return false;
        j--;i--;
    }
     //bottom left row i+1 j-1
    i=row,j=col;
    while(j>=0&&i<n){
        if(board[i][j]==1)
        return false;
        j--;i++;
    }
    return true;
}
void print(vector<vector<int>> board,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<" "<<board[i][j];
        }
        cout<<endl;
    }
}
void solve(vector<vector<int>>& board,int col,int n){
    if(col>=n){
        cout<<"print"<<endl;
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