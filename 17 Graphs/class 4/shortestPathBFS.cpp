#include<bits/stdc++.h>
using namespace std;
class Graph{
    public:
    unordered_map<int,list<int>> adj;
    void addedge(int u,int v,int direct){
        adj[u].push_back(v);
        if(direct==0)
            adj[v].push_back(u);
    }
    void printadj(){
        for(auto i:adj){
            cout<<i.first<<"->";
            for(auto neigh:i.second){
                cout<<neigh<<" ,";
            }
            cout<<endl;
        }
    }
    void shortestPathBFS(int src ,int dest){
        queue<int> q;
        unordered_map<int,bool> visited;
        unordered_map<int,int> parent;
        q.push(src);
        visited[src]=true;
        parent[src]=-1;
        while(!q.empty()){
            int fNode=q.front();
            q.pop();
            for(auto nbr:adj[fNode]){
                if(!visited[nbr]){
                    visited[nbr]=true;
                    q.push(nbr);
                    parent[nbr]=fNode;
                }
            }
        }
        stack<int> st;
        int node=dest;
        while(node!=-1){
            st.push(node);
            node=parent[node];
        }
        while(!st.empty()){
            cout<<st.top()<<", ";
            st.pop();
        }

    }
};
int main(){
    Graph g;
    g.addedge(0,1,1);
    g.addedge(1,2,1);
    g.addedge(2,3,1);
    g.addedge(2,4,1);
    g.addedge(4,5,1);
    g.addedge(3,5,1);
    g.addedge(5,6,1);
    g.printadj();
    g.shortestPathBFS(0,4);
}