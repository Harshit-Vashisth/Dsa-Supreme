#include<bits/stdc++.h>
using namespace std;
class Graph{
    public:
unordered_map<int,list<pair<int,int>>> adj;
void addedge(int u,int v,bool direction,int weight){
    //direction 0 undirected
    //direction 1 directed
    adj[u].push_back({v,weight});
    if(direction==0)
        adj[v].push_back({u,weight});
}
void printadj(){
    for(auto i:adj){
        cout<<i.first<<"->";
        for(auto neigh:i.second){
            cout<<"{"<<neigh.first<<"  "<<neigh.second<<"}";
        }
        cout<<endl;
    }
}
};
int main(){
    Graph g;
    g.addedge(0,1,1,4);
    g.addedge(1,2,1,5);
    g.addedge(2,1,1,6);
    g.addedge(3,1,1,7);
    g.addedge(3,4,1,10);
    g.addedge(4,3,1,12);
    g.printadj();
}