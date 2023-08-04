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
        if(visted[nbr]==true && dfsvisted[nbr]==true)
            return true;
    }
    dfsvisted[src]=false;
    return false;
}
void topoSortBFS(int n,vector<int>& ans){
    unordered_map<int,int> indegree;
    queue<int> q;
    for(auto i:adj){
        for(auto nbr:i.second)
            indegree[nbr]++;
    }
    
    for(auto i:indegree){
        if(i.second==0)
            q.push(i.first);
    }

    while(!q.empty()){
        int fnode=q.front();
        q.pop();
        ans.push_back(fnode);
        for(auto i : adj[fnode]){
            if(indegree[i]>0)
                indegree[i]--;
                else
                ans.push_back(i);
        }
    }
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
    vector<int> ans;
     g.topoSortBFS(n,ans);
    for(auto i : ans)
        cout<<i<<" , ";
}