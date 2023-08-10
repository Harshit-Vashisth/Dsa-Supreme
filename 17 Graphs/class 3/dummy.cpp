#include<bits/stdc++.h>
using namespace std;
class Graph{
    public:
    unordered_map<int, list<int>> adj;
    void addedge(int u, int v , int direct){
        adj[u].push_back(v);
        if(direct==0)
            adj[v].push_back(u);
    }
    void print(){
        for(auto i:adj){
            cout<<i.first<<"-> ";
            for(auto nbr:i.second)
                cout<<nbr;
            cout<<endl;
        }
    }
    void toposort(int src,unordered_map<int,bool> & visited,stack<int>& ans){
        visited[src]=true;
        for(auto nbr:adj[src]){
            if(!visited[nbr])
                toposort(nbr,visited,ans);
        }
        ans.push(src);
    }
};
int main(){
    Graph g;
    int n=5;
    g.addedge(0,1,1);
    g.addedge(1,2,1);
    g.addedge(2,3,1);
    g.addedge(3,4,1);
    g.addedge(4,5,1);
    g.print();
    unordered_map<int,bool> visited;
    stack<int> ans;
    for(int i=0;i<n;i++){
        if(!visited[i])
        g.toposort(i,visited,ans);
    }
    while(!ans.empty()){
        cout<<ans.top();
        ans.pop();
    }
}