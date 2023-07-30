#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Graph{
    public:
unordered_map<T,list<T>> adj;
void addedge(T u,T v,bool direction){
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
    Graph<int> g;
    g.addedge(0,1,1);
    g.addedge(1,2,1);
    g.addedge(2,1,1);
    g.addedge(3,1,1);
    g.addedge(3,4,1);
    g.addedge(4,3,1);
    g.printadj();
}