#include<bits/stdc++.h>
using namespace std;
bool issafe(int x,int y,int row,int col,int m[3][3],vector<vector<bool>> vist){
    if(((x>=0 &&x<row) &&( y>=0 && y<col))&&
    (m[x][y]==true)&&
    (vist[x][y]==false))
        return true;
    else return false;
}
void solve(int m[3][3],int row,int col,int i,int j, vector<string>& path,string out,vector<vector<bool>> vist){
    if(i==row-1&&j==col-1){
        path.push_back(out);
        return ;
    }
    //down i+1.j
    if(issafe(i+1,j,row,col,m,vist)){
        vist[i+1][j]=true;
        solve(m,row,col,i+1,j,path,out+'D',vist);
        vist[i+1][j]=false;
    }
    //left i.j-1
    if(issafe(i,j-1,row,col,m,vist)){
        vist[i][j-1]=true;
        solve(m,row,col,i,j-1,path,out+'L',vist);
        vist[i][j-1]=false;
    }
    //right i.j+1
    if(issafe(i,j+1,row,col,m,vist)){
        vist[i][j+1]=true;
        solve(m,row,col,i,j+1,path,out+'R',vist);
        vist[i][j+1]=false;
    }
    //up i-1.j
    if(issafe(i-1,j,row,col,m,vist)){
        vist[i-1][j]=true;
        solve(m,row,col,i-1,j,path,out+'U',vist);
        vist[i-1][j]=false;
    }
}
int main(){
     int m[3][3]={{1,0,0},{1,1,0},{1,1,1}};
     int row=3,col=3;
     vector<vector<bool>> vist(row,vector<bool>(col,false));
     vist[0][0]=true;
     vector<string> path;
     string out="";
     solve(m,row,col,0,0,path,out,vist);
     if(path.size()==0){
        cout<<"No path";
        return 0;   }
}