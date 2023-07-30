#include<bits/stdc++.h>
using namespace std;
class Graph{
    public:
unordered_map<int,list<int>> adj;
void addedge(int u,int v,bool direction){
    //direction 0 undirected
    //direction 1 directed
    adj[u].push_back(v);
    if(direction==0)
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
};
int main(){
    Graph g;
    g.addedge(0,1,0);
    g.addedge(1,2,0);
    g.addedge(2,1,0);
    g.addedge(3,1,0);
    g.addedge(3,4,0);
    g.addedge(4,3,0);
    g.printadj();
}