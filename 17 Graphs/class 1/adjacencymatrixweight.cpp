#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,e;
    cout<<"Enter the number of node"<<endl;
    cin>>n;
    cout<<"Enter the number of edges"<<endl;
    cin>>e;
    int u,v,weight;
    vector<vector<int>> adj(n,(vector<int>(n,0)));
   for(int i=0;i<e;i++){
        cin>>u>>v>>weight;
        adj[u][v]=weight;
   }
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<adj[i][j];
    }
    cout<<endl;
   }
}