#include <iostream>
#include<unordered_map>
#include<list>
#include<queue>
#include<stack>
#include<algorithm>
#include<set>
#include<limits.h>
using namespace std;


class graph {
	public:
	unordered_map<int, list<pair<int,int> > > adjList;

	void addEdge(int u, int v, int wt, bool direction) {
		//direction = 1 -> undirected graph
		//direction => 0 -> directed graph;
		adjList[u].push_back({v,wt});
		if(direction == 1) {
			adjList[v].push_back({u,wt});
		}
	}

	void printAdjList() {
		for(auto i: adjList) {
			cout << i.first <<"-> ";
			for(auto j: i.second) {
				cout << "(" << j.first<<", "<<j.second<<"), ";
			}
			cout << endl;
		}
	}

	void shortestPathBfs(int src, int dest) {
		queue<int> q;
		unordered_map<int,bool> visited;
		unordered_map<int,int> parent;

		//inital steps for src
		q.push(src);
		visited[src] = 1;
		parent[src] = -1;

		while(!q.empty()) {
			int fNode = q.front();
			q.pop();

			for(auto nbr: adjList[fNode]) {
				if(!visited[nbr.first]) {
					q.push(nbr.first);
					visited[nbr.first] = 1;
					parent[nbr.first] = fNode;
				}
			}
		}

		//store path in ans, after traversing in the parent array
		vector<int> ans;
		int node = dest;
		while(node != -1) {
			ans.push_back(node);
			node = parent[node];
		}

		reverse(ans.begin(), ans.end());

		cout << "printing ANs: " << endl;
		for(auto i: ans) {
			cout << i<<", ";
		}
		cout << endl;
		
	}


	void topoSortDfs(int src, unordered_map<int, bool>& visited, stack<int>& topo) {
		
		visited[src] = true;

		for(auto neighbour: adjList[src]) {
			if(!visited[neighbour.first] ) {
				topoSortDfs(neighbour.first, visited, topo);
			}
		}

		//while returning, store the node in stack
		cout << "Pushing " << src << endl;
		topo.push(src);
	}

 	void shortestpathDfs(stack<int> topo, int dest,int n) {
		vector<int> dist(n, INT_MAX);

		int src = topo.top();
		topo.pop();
		dist[src] = 0;
        for(auto nbr: adjList[0]){
            if(dist[0]+nbr.second<dist[nbr.first])
                dist[nbr.first]=dist[0]+nbr.second;
        }
        while(!topo.empty()){
            int topele=topo.top();
            topo.pop();
            if(dist[topele]!=INT_MAX){
            for(auto nbr:adjList[topele]){
                if(dist[topele]+nbr.second<dist[nbr.first])
                    dist[nbr.first]=dist[topele]+nbr.second;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<dist[i]<<"  ";
        }
	}

	
};

int main() {
	graph g;

	g.addEdge(0,1,5,1);
	g.addEdge(0,2,3,1);
	g.addEdge(2,1,2,1);
	g.addEdge(1,3,3,1);
	g.addEdge(2,4,6,1);
	g.addEdge(4,3,1,1);
	
    stack<int> topo;
    unordered_map<int,bool> visited;
    g.topoSortDfs(0,visited,topo);
    g.shortestpathDfs(topo,3,5);

	return 0;
}