#include<bits/stdc++.h>
using namespace std;
bool issafe(int val,int board[][9],int row,int col){
    //row
    for(int i=0;i<9;i++)
        if((board[row][i]==val)||(board[i][col]==val)||(board[3*+(row/3)+(i/3)][3*(col/3)+(i%3)])==val)
        return false;

    return true;
}
//return true or false base on soln found or not
bool solve(int board[][9]){
    int n=9;
    //empty cell ko fill
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            //check for empty cell
            if(board[i][j]==0)
            {
                for(int val=1;val<=9;val++){
                    //check for safe 
                    if(issafe(val,board,i,j)){
                        //insert
                        board[i][j]=val;
                        //bali recursion dekh lega
                        bool aage=solve(board);
                        if(aage==true)
                           return true;
                        board[i][j]=0;
                    }
                }
            return false;
            }  
        }
    }
    return false;
}
int main(){
int board[9][9]={
            {4,5,0,0,0,0,0,0,0},
            {0,0,2,0,7,0,6,3,0},
            {0,0,0,0,0,0,0,2,8},
            {0,0,0,9,5,0,0,0,0},
            {0,8,6,0,0,0,2,0,0},
            {0,2,0,6,0,0,7,5,0},
            {0,0,0,0,0,0,4,7,6},
            {0,7,0,0,4,5,0,0,0},
            {0,0,8,0,0,9,0,0,0}
            };
int n=9;
solve(board);
for(int i=0;i<9;i++){
    for(int j=0;j<9;j++)
    cout<<board[i][j]<<" ";
    cout<<endl;
}
}