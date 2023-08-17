#include<bits/stdc++.h>
using namespace std;
class Graph{
    public:
    unordered_map<int,list<int>> adj;
    void addedge(int u,int v,int direction){
        adj[u].push_back(v);
        if(direction==0)
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
};
int main(){
    Graph g;
    g.addedge(0,1,1);
    g.addedge(1,3,1);
    g.addedge(2,1,1);
    g.addedge(3,2,1);
    g.addedge(4,3,1);
    g.addedge(4,1,1);
    g.addedge(3,1,1);
    g.printedge();
}