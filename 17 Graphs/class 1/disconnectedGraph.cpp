#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Graph{
    public:
   unordered_map<T, list<T>> adj;
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
void bfs(T src,unordered_map<T, bool> visited){
    queue<T> q;
    
    q.push(src);
    visited[src]=true;
    while(!q.empty())
    {
        T front=q.front();
        q.pop();
        cout<<front<<" -> ";
        for(auto i:adj[front]){
            if(!visited[i]){
                q.push(i);
                visited[i]=true;
            }
        }
    }
}
};
int main(){
    Graph<int> g;
    g.addedge(0,1,0);
    g.addedge(1,2,0);
    g.addedge(2,1,0);
    g.addedge(3,1,0);
    g.addedge(3,4,0);
    g.addedge(4,3,0);
    g.printadj();
    unordered_map<int, bool> visited;
    for(int i=0;i<5;i++){
        if(!visited[i])
            g.bfs(i,visited);
    }
    
}