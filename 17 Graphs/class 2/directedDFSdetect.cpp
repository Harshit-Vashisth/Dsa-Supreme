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
bool checkcyclic(int src,unordered_map<int,bool>& visted,unordered_map<int,bool>& dfsvisted){
      visted[src]=true;
    dfsvisted[src]=true;
    for(auto nbr: adj[src])
    {
    if(!visted[nbr]){
        bool check=checkcyclic(nbr,visted,dfsvisted);
        if(check==true)
        return true;
    }
    else if(visted[nbr]==true && dfsvisted[nbr]==true)
            return true;
    }
    dfsvisted[src]=false;
    return false;
}
};
int main(){
    Graph g;
    int n=5;
    g.addedge(0,1,1);
    g.addedge(1,2,1);
    g.addedge(2,3,1);
    g.addedge(3,4,1);
    g.addedge(4,0,1);
    g.printadj();
    bool ans=false;
    unordered_map<int, bool> visited;
    unordered_map<int, bool> dfsvisted;
    for(int i=0;i<n;i++){
        if(!visited[i])
            ans=g.checkcyclic(i,visited,dfsvisted);
        if(ans==true)
            break;
    }
    if(ans==true)
        cout<<"Cycle is present"<<endl;
    else
        cout<<"Cycle is not present"<<endl;
}