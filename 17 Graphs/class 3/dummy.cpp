#include<bits/stdc++.h>
using namespace std;
class Graph{
    public:
    unordered_map<int, list<int>> adj;
    void addedge(int u, int v , int direct){
        adj[u].push_back(v);
        if(direct==0)
            adj[v].push_back(u);
    }
    void print(){
        for(auto i:adj){
            cout<<i.first<<"-> ";
            for(auto nbr:i.second)
                cout<<nbr;
            cout<<endl;
        }
    }
    void toposortDFS(int src,unordered_map<int,bool> & visited,stack<int>& ans){
        visited[src]=true;
        for(auto nbr:adj[src]){
            if(!visited[nbr])
                toposortDFS(nbr,visited,ans);
        }
        ans.push(src);
    }
    void topsortBFS(vector<int>& ans,int n){
        queue<int> q;
        unordered_map<int,bool> visited;
        unordered_map<int,int> indegree;
        
        for(auto i:adj){
            for(auto nbr:i.second){
               indegree[nbr]++;
            }
        }
        for(int i=0;i<n;i++){
            if(indegree[i]==0)
                q.push(i);
        }
        while(!q.empty()){
            int fnode=q.front();
            q.pop();
            ans.push_back(fnode);
            for(auto nbr:adj[fnode]){
                 indegree[nbr]--;
				//check for zero again
				if(indegree[nbr] == 0) {
					q.push(nbr);
				}
            }
        }
    }
};
int main(){
    Graph g;
    int n=6;
    g.addedge(0,1,1);
    g.addedge(1,2,1);
    g.addedge(2,3,1);
    g.addedge(3,5,1);
    g.addedge(3,4,1);
    g.addedge(4,6,1);
    g.addedge(5,6,1);
    g.print();
    // unordered_map<int,bool> visited;
    // stack<int> ans;
    // for(int i=0;i<n;i++){
    //     if(!visited[i])
    //     g.toposortDFS(i,visited,ans);
    // }
    vector<int> ans;
    g.topsortBFS(ans,n);
    // for(auto i : ans)
    //     cout<<i<<" ";
    if(ans.size()==n)
    cout<<"Cycle is not persent";
    else 
    cout<<"Cycle present";
}