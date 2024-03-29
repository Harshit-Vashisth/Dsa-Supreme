#include<bits/stdc++.h>
using namespace std;
// template<typename T>
class Graph{
    public:
    unordered_map<int,list<int>> adj;
    void addedge(int u,int v,int direction){
        adj[u].push_back(v);
        if(direction==1)
            adj[v].push_back(u);
    }
    void printedge(){
        for(auto i:adj){
            cout<<i.first<<"-> ";
            for(auto nbr: i.second){
                cout<<nbr;
            }
            cout<<endl;
        }
    }
    void taraversalDFS(int src, unordered_map<int,bool>& visited){
        visited[src]=true;
        queue<int> q;
        cout<<src<<", ";
        for(auto nbr:adj[src]){
            if(!visited[nbr]){
                taraversalDFS(nbr,visited);
            }
        }
    }
    void taraversalbfs(int src){
        queue<int> q;
        unordered_map<int,bool> visited;
        q.push(src);
        visited[src]=true;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            cout<<node<<", ";
            for(auto nbr: adj[node]){
                if(!visited[nbr])
                    q.push(nbr);
                    visited[nbr]=true;
            }
        }
    }
};
int main(){
    Graph g;
    g.addedge(0,1,0);
    g.addedge(1,2,0);
    g.addedge(2,3,0);
    g.addedge(3,1,0);
    g.addedge(3,4,0);
    g.addedge(4,3,0);
    g.printedge();
    g.taraversalbfs(0);
    unordered_map<int,bool> visited;
    cout<<endl;
    for(int i =0;i<5;i++){
        if(!visited[i])
            g.taraversalDFS(i,visited);
    }
    
}