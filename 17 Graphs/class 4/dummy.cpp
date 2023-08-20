#include<bits/stdc++.h>
using namespace std;

class Graph{
    public : 
    unordered_map<int,list<pair<int,int>>> adj;
    void addEdge(int u, int v,int wt,int direct){
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
    void topoSortDfs(int src, unordered_map<int, bool>& visited, stack<int>& topo) {
		
		visited[src] = true;

		for(auto neighbour: adj[src]) {
			if(!visited[neighbour.first] ) {
				topoSortDfs(neighbour.first, visited, topo);
			}
		}

		//while returning, store the node in stack
		cout << "Pushing " << src << endl;
		topo.push(src);
	}

    void shortestPathDFS(stack<int>& topo,int dest,int n){
        vector<int> dist(n,INT_MAX);
        int src=topo.top(); topo.pop();
        dist[src]=0;
        for(auto nbr: adj[0]){
            if(dist[0]+nbr.second<dist[nbr.first])
                dist[nbr.first]=dist[0]+nbr.second;
        }
        while(!topo.empty()){
            int topelement=topo.top();
            topo.pop();
            if(dist[topelement]!=INT_MAX){
                for(auto nbr:adj[topelement]){
                    if(dist[topelement]+nbr.second<dist[nbr.first])
                        dist[nbr.first]=dist[topelement]+nbr.second;
                }
            }
        }
        cout<<"printing";
        for(auto i : dist){
            cout<<i<<' ';
        }
    }
    void dijkastra(int src,int n){
        set<pair<int,int>> st;
        vector<int> dist(n,INT_MAX);
        dist[src]=0;
        st.insert(make_pair(0,src));
        while(!st.empty()){
            auto topElement=*(st.begin());
            int nodeDis= topElement.first;
            int node=topElement.second;
            st.erase(st.begin());
            for(auto nbr: adj[node]){
                if(nodeDis+nbr.second<dist[nbr.first]){
                    auto result=st.find(make_pair(dist[nbr.first],nbr.first));
                    if(result!=st.end())
                        st.erase(result);
                    dist[nbr.first]=nodeDis+nbr.second;
                    st.insert(make_pair(dist[nbr.first],nbr.first));
                }
            }
        }
        for(auto i:dist){
            cout<<i<<" ";
        }
    }
};
int main(){
    Graph g;
   
	g.addEdge(6,3,2,1);
	g.addEdge(6,1,14,1);
	g.addEdge(3,1,9,1);
	g.addEdge(3,2,10,1);
	g.addEdge(1,2,7,1);
	g.addEdge(2,4,15,1);
	g.addEdge(4,3,11,1);

	g.addEdge(6,5,9,1);
	g.addEdge(4,5,6,1);
 
	g.print();
    
    g.dijkastra(6,7);
	return 0;
}