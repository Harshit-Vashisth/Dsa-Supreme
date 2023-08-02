#include<bits/stdc++.h>
using namespace std;
class Graph{
    public:
   unordered_map<int, list<int>> adj;
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
void dfs(int src,unordered_map<int, bool>& visited){
    cout<<src<<" ";
    visited[src]=true;
        for(auto i:adj[src]){
            if(!visited[i]){
                dfs(i,visited);
            }
        }
    }
bool checkcyclic(int src,unordered_map<int,bool>& visted){
    queue<int> q;
    q.push(src);
    unordered_map<int,int> parent;
    parent[src]=-1;
    while(!q.empty()){
        int frontNode=q.front();
        q.pop();
        for(auto nbr: adj[frontNode])
        {
            if(!visted[nbr]){
                q.push(nbr);
                visted[nbr]=true;
                parent[nbr]=frontNode;
            }
            else{
                if(nbr!=parent[frontNode])
                return true;
            }
        }
    }
    return false;
}
};
int main(){
    Graph g;
    int n=5;
    g.addedge(0,1,0);
    g.addedge(2,1,0);
    g.addedge(1,2,0);
    g.addedge(3,1,0);
    g.addedge(3,4,1);
    g.addedge(4,3,1);
    g.printadj();
    bool ans=false;
    unordered_map<int, bool> visited;
    for(int i=0;i<n;i++){
        if(!visited[i])
            ans=g.checkcyclic(i,visited);
        if(ans==true)
            break;
    }
    if(ans==true)
        cout<<"Cycle is present"<<endl;
    else
        cout<<"Cycle is not present"<<endl;
}