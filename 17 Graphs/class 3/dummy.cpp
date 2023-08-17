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
    bool cycledetect(int src,unordered_map<int,bool>& visited){
        queue<int> q;
        
        unordered_map<int,int> parent;
        q.push(src);
        visited[src]=true;
        parent[src]=-1;
        while(!q.empty()){
            int fNode=q.front();
            q.pop();
            for(auto nbr: adj[fNode]){
                if(!visited[nbr]){
                    visited[nbr]=true;
                    parent[nbr]=fNode;
                    q.push(nbr);
                }
                else if(nbr!=parent[fNode]){
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
    g.addedge(1,2,0);
    g.addedge(2,3,0);
    g.addedge(3,4,0);
    g.addedge(4,2,0);
    g.print();
    bool ans=false;
    unordered_map<int,bool> visited;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            ans=g.cycledetect(i,visited);
            if(ans==true)
                break;
        }
    }
    if(ans==true)
        cout<<"Cycle is prsent"<<endl;
    else
        cout<<"Cycle is absent"<<endl;
}