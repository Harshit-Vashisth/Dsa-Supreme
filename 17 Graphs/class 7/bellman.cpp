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
                cout<<neigh.first<<" ,";
            }
            cout<<endl;
        }
    }
    void bellmanFordAlgo(int n,int src){
        vector<int> dist(n,INT_MAX);
        dist[src]=0;
        for(int i=0;i<n-1;i++){
            //n-1 relaxation step
            for(auto t:adj)
            {
                for(auto nbr:t.second){
                    int u=t.first;
                    int v=nbr.first;
                    int wt=nbr.second;
                    if(dist[u]!=INT_MAX && dist[u]+wt<dist[v]){
                        dist[v]=dist[u]+wt;
                        }
                }
            }
        }
        bool negativecycle=false;
        for(auto t:adj)
            {
                for(auto nbr:t.second){
                    int u=t.first;
                    int v=nbr.first;
                    int wt=nbr.second;
                    if(dist[u]!=INT_MAX && dist[u]+wt<dist[v]){
                        negativecycle=true;
                        break;
                        }
                }
            }
        if(negativecycle)
            cout<<"negative cycle is present";
        else{
            cout<<"negative cycle is absent";
        }
        cout<<"Printing the answer";
        for(auto i :dist)
            cout<<i<<" ";
    }
};
int main(){
    Graph g; 
    g.addEdges(0,1,-1,0);
    g.addEdges(0,2,4,0);
    g.addEdges(1,2,3,0);
    
    g.addEdges(1,3,2,0);
    g.addEdges(1,4,2,0);
    g.addEdges(3,1,1,0);

    g.addEdges(3,2,5,0);
    g.addEdges(4,3,-3,0);
    g.bellmanFordAlgo(5,0);
}