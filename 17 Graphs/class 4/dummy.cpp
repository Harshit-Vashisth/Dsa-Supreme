#include<bits/stdc++.h>
using namespace std;

class Graph{
    public : 
    unordered_map<int,list<pair<int,int>>> adj;
    void addedge(int u, int v,int wt,int direct){
        adj[u].push_back({v,wt});
        if(direct==0)
           adj[v].push_back({u,wt}); 
    }
    void print() {
		for(auto i: adj) {
			cout << i.first <<"-> ";
			for(auto j: i.second) {
				cout << "(" << j.first<<", "<<j.second<<"), ";
			}
			cout << endl;
		}
	}
    void shortestpathBFS(int src,int dest){
        queue<int> q;
        unordered_map<int,bool> visited;
        unordered_map<int,int> parent;
        q.push(src);
        visited[src]=true;
        parent[src]=-1;
        while(!q.empty()){
            int fNode=q.front();
            q.pop();
            for(auto nbr: adj[fNode]){
                if(!visited[nbr.first]){
                    q.push(nbr.first);
                    visited[nbr.first]=true;
                    parent[nbr.first]=fNode;
                }
            }
        }
        stack<int> ans;
        int node=dest;
        while(node!=-1){
            ans.push(node);
            node=parent[node];
        }
        cout<<"printing answer";
        while(!ans.empty()){
            cout<<ans.top();
            ans.pop();
            }
    }
};
int main(){
    Graph g;
    g.addedge(1,2,1,1);
    g.addedge(2,3,1,1);
    g.addedge(0,1,1,1);
    g.addedge(2,4,1,1);
    g.addedge(3,5,1,1);
    g.addedge(4,6,1,1);
    g.addedge(5,7,1,1);
    g.addedge(6,7,1,1);
    g.print();
    g.shortestpathBFS(0,7);
}