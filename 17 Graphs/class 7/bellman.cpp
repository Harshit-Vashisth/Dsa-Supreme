#include<bits/stdc++.h>
using namespace std;
class Graph{
    public:
    unordered_map<int,list<pair<int,int>>> adj;
    void addEdges(int u ,int v,int wt,int  direct){
        // 1 ->undirected 
        // 0->directed
        adj[u].push_back({v,wt});
        if(direct==1)
        adj[v].push_back({u,wt});
        
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
};
int main(){
    Graph g;

}