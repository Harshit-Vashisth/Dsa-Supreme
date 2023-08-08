#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e;
    cout<<"Enter the number of nodes and edges "<<endl;
    cin>>n>>e;
    int u,v;
    vector<vector<int>> adj(n,vector<int> (n,0));
    for(int i=0;i<e;i++){
        cin>>u>>v;
        adj[u][v]=1;
        }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}