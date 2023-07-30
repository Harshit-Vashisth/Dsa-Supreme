#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of Node"<<endl;
    cin>>n;
    vector<vector<int>> adjList(n,vector<int>(n,0));
    int e;
    cout<<"Enter no of edges"<<endl;
    cin>>e;
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adjList[u][v]=1;
    }
    for(int i=0;i<e;i++){
        for(int j=0;j<n;j++){
            cout<<adjList[i][j]<<" ";
        }
        cout<<endl;
    }
}