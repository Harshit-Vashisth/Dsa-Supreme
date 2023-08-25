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
    void floyd(int n){
        vector<vector<int>> dist(n,vector<int>(n,10000));
        //diagnoal par 0
        for(int i=0;i<n;i++){
            dist[i][i]=0;
        }
        //yaha humne graph ke ac dist insert karidya h 
        for(auto t: adj){
            for(auto nbr:t.second){
                int u=t.first;
                int v=nbr.first;
                int wt=nbr.second;
                dist[u][v]=wt;
            }
        }
        for(int helper=0;helper<n;helper++){
            for(int src=0;src<n;src++){
                for(int dest=0;dest<n;dest++){
                    dist[src][dest]=min(dist[src][dest]  ,   dist[src][helper]+dist[helper][dest]);
                    // we can also termed it as dp as we are using old state 
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<dist[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    Graph g; 
    g.addEdges(0,1,3,0);
    g.addEdges(0,3,5,0);
    g.addEdges(1,0,2,0);
    
    g.addEdges(1,3,4,0);
    g.addEdges(2,1,1,0);
    g.addEdges(3,2,2,0);

    g.floyd(4);
}