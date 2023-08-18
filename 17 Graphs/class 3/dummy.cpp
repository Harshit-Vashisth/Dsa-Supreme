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
bool checkcyclic(int src,unordered_map<int,bool>& visted,int parent){
      visted[src]=true;

    for(auto nbr: adj[src])
    {
    if(!visted[nbr]){
        bool check=checkcyclic(nbr,visted,src);
        if(check==true)
            return true;
    }
    else if( nbr!= parent)
        return true;
    }
    return false;
}
void topoSort(int src,unordered_map<int,bool>& visited,stack<int>& st){
    visited[src]=true;
    for(auto nbr:adj[src]){
        if(!visited[nbr])
            topoSort(nbr,visited,st);
    }
    st.push(src);
}
    

};
int main(){
    Graph g;
    int n=4;
    g.addedge(0,1,1);
    g.addedge(1,2,1);
    g.addedge(2,3,1);
    g.addedge(3,4,1);
    g.addedge(3,5,1);
    g.addedge(4,6,1);
    g.addedge(5,6,1);
    g.addedge(6,7,1);
    // g.addedge(4,0,1);
    g.printadj();
    unordered_map<int, bool> visited;
    stack<int> st;
    for(int i=0;i<8;i++){ 
        if(!visited[i])
            g.topoSort(i,visited,st);
    }
    cout<<endl;
    while(!st.empty()){
        cout<<st.top()<<", ";
        st.pop();
    }
}