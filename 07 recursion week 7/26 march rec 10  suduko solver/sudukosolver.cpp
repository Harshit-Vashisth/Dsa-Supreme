#include<bits/stdc++.h>
using namespace std;

int main(){
int board[9][9]={
            {4,5,0,0,0,0,0,0,0},
            {0,0,2,0,7,0,6,3,0},
            {0,0,0,0,0,0,0,2,8},
            {0,0,0,9,5,0,0,0,0},
            {0,8,6,0,0,0,2,0,0},
            {0,2,0,6,0,0,7,5,0},
            {0,0,0,0,0,0,4,7,6}
};
for(int i=0;i<9;i++){
    for(int j=0;j<9;j++)
    cout<<board[i][j]<<endl;
    cout<<endl;
}
}