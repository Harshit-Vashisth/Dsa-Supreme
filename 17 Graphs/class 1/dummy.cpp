#include<bits/stdc++.h>
using namespace std;
class Graph{
    public:
    unordered_map<int,list<int>> adj;
    void addadj(int u,int v,int direct){
        adj[u].push_back(v);
        if(direct==0)
            adj[v].push_back(u);
    }
    void printadj(){
        for(auto i:adj){
            cout<<i.first<<"->";
            for(auto nbr:i.second)
                cout<<nbr<<", ";
        }
        cout<<endl;
    }
    void traversebfs(int src){
        queue<int> q;
        unordered_map<int,bool> visited;
        q.push(src);
        visited[src]=true;
        while(!q.empty()){
            int fnode=q.front();
            q.pop();
            cout<<fnode;
            for(auto i : adj[fnode]){
                if(!visited[i])
                    q.push(i);
                    visited[i]=true;
            }
        }
    }
    void dfs(int src,unordered_map<int,bool>& visited){
        cout<<"src"<<", ";
        visited[src]=true;
        for(auto nbr:adj[src])
        {
            if(!visited[nbr])
                dfs(src,visited);
        }
    }
};
int main(){
    Graph g;
    g.addadj(0,1,1);
    g.addadj(1,2,1);
    g.addadj(2,3,1);
    g.addadj(3,4,1);
    g.addadj(4,5,1);
    g.addadj(5,6,1);
    g.printadj();
    g.traversebfs(0);
    unordered_map<int,bool> visited;
    g.dfs(0,visited);
    // int n,e;
    // cout<<"Enter the number of nodes and edges "<<endl;
    // cin>>n>>e;
    // int u,v;
    // vector<vector<int>> adj(n,vector<int> (n,0));
    // for(int i=0;i<e;i++){
    //     cin>>u>>v;
    //     adj[u][v]=1;
    //     }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<adj[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}