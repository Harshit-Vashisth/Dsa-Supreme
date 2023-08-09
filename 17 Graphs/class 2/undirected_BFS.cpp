#include<bits/stdc++.h>
using namespace std;
class Graph{
    public:
    unordered_map<int,list<int>> adj;
    void addedge(int u, int v ,int direct){
        adj[u].push_back(v);
        if(direct==0)
        adj[v].push_back(u);
    }
    void print(){
        for(auto i: adj){
            cout<<i.first<<"-> ";
            for( auto nbr: i.second){
                cout<<nbr<<", ";
            }
            cout<<endl;
        }
    }
};
int main(){
    Graph g;
    int n=5;
    g.addedge(0,1,0);
    g.addedge(1,2,0);
    g.addedge(2,3,0);
    g.addedge(3,4,0);
    g.addedge(4,0,0);
    g.print();
}