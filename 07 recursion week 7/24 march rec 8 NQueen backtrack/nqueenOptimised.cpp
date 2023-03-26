#include<bits/stdc++.h>
using namespace std;

unordered_map<int,bool> rowcheck;
unordered_map<int,bool> upperd;
unordered_map<int,bool> lowerd;

bool issafe(vector<vector<int>> &board,int row,int col,int n){
    if((rowcheck[row]==true) || (upperd[(n-1)+col-row]==true )|| (lowerd[row+col]==true))
    return false;
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
void solve(vector<vector<int>> &board,int col,int n){
    if(col>=n){
        cout<<"print"<<endl;
        print(board,n);
    return;
    }
    cout<<"K";
    for(int row=0;row<n;row++){
        if(issafe(board,row,col,n)){
            board[row][col]=1;
            rowcheck[row]=true;
            upperd[n-1+col-row]=true;
            lowerd[row+col]=true;
            cout<<"ee";
            solve(board,col+1,n);

            board[row][col]=0;
            rowcheck[row]=false;
            upperd[n-1+col-row]=false;
            lowerd[row+col]=false;
            
            }  
    }
}
int main(){
    int n;
    cin>>n;
    int col=0;
    vector<vector<int>> board(n,vector<int>(n,0));
    solve(board,col,n);
}