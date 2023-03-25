#include<bits/stdc++.h>
using namespace std;
void solve(int m[3][3],int row,int col,int i,int j, vector<string>& path,string out,vector<vector<bool>> vist){
    if(i==row-1&&j==col-1){
        path.push_back(out);
        return ;
    //down i+1.j
    if(issafe(i+1,j,row,col,m,vist)){
        vist[i+1][j]=true;
        solve(m,row,col,i+1,j,path,out+'D',vist)
    }
    }
}
int main(){
     int m[3][3]={{1,0,0},{1,1,0},{1,1,1}};
     int row=3,col=3;
     vector<vector<bool>> vist(row,vector<bool>(col,false));
     vist[0][0]=true;
     vector<string> path;
     string out="";
     solve(m,row,col,0,0,=path,out,vist);
     if(path.size()==0){
        cout<<"No path";
        return 0;   }
}