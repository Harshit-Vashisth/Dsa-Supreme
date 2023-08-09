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
    bool cycledetect(int src,unordered_map<int,bool>& visited,unordered_map<int,bool>& dfsvisited){
        visited[src]=true;
        dfsvisited[src]=true;
        
            for(auto nbr: adj[src]){
                if(!visited[nbr]){
                    bool check=cycledetect(nbr,visited,dfsvisited);
                    if(check==true)
                        return true;
                }
                else if(visited[nbr]==true && dfsvisited[nbr]==true){
                    return true;
                }
        }
        dfsvisited[false];

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
    // g.addedge(4,2,1);
    g.print();
    bool ans=false;
    int parent=-1;
    unordered_map<int,bool> visited;
    unordered_map<int,bool> dfsvisited;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            ans=g.cycledetect(i,visited,dfsvisited);
            if(ans==true)
                break;
        }
    }
    if(ans==true)
        cout<<"Cycle is prsent"<<endl;
    else
        cout<<"Cycle is absent"<<endl;
}