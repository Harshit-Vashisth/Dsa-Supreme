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
    void print(){
        for(auto i: adj){
            cout<<i.first<<"-> ";
            for(auto nbr:i.second){
                cout<<nbr<<", ";
            }
            cout<<endl;
        }
    }
    void topoSort(){

    }
    void shortestpathDFS(int n,stack<int>& st){
        
    }
};
int main(){
    Graph g;
    g.addedge(0,1,1);
    g.addedge(1,2,1);
    g.addedge(2,3,1);
    g.addedge(2,4,1);
    g.addedge(3,5,1);
    g.addedge(4,6,1);
    g.addedge(5,7,1);
    g.addedge(6,7,1);
    g.print();
}