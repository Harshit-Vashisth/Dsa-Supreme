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
            cout<<i.first;
            for(auto nbr:i.second)
                cout<<nbr;
        }
    }
};
int main(){
    Graph g;
    
}