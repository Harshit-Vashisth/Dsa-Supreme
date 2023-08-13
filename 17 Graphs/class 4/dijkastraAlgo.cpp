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

    void shortestDijkastra(int src,int n){
        vector<int> dis(n,INT_MAX);
        set<pair<int,int>> st;
        dis[src]=0;
        st.insert(make_pair(0,src));
        while(!st.empty()){
            auto top=*(st.begin());//iterator of  starting value then we derefrence it to get the actual vlaue
            int nodedis=top.first;
            int node=top.second;
            st.erase(st.begin());

            //neighbour traversal
            for(auto nbr: adjList[node]){
                if(nodedis+nbr.second<dis[nbr.first]){
                    //update dis in set and dis array       GALTI++++
                    // find dis of set on old 
                    // search dis[nbr.first in set]
                    auto result=st.find(make_pair(dis[nbr.first],nbr.first));
                    if(result !=st.end()) {
                        st.erase(result);
                    } //found
                    dis[nbr.first]=nodedis+nbr.second;
                    st.insert(make_pair(dis[nbr.first],nbr.first));

                }
            }
        }
        cout<<"printing";
        for(int i=0;i<n;i++)
        cout<<dis[i]<<"   ";
    }
	
};

int main() {
	graph g;

	g.addEdge(6,3,2,1);
	g.addEdge(6,1,14,1);
	g.addEdge(3,1,9,1);
	g.addEdge(3,2,10,1);
	g.addEdge(1,2,7,1);
	g.addEdge(2,4,15,1);
	g.addEdge(4,3,11,1);

	g.addEdge(6,5,9,1);
	g.addEdge(4,5,6,1);
 
	g.printAdjList();
    stack<int> topo;
    unordered_map<int,bool> visited;
    g.topoSortDfs(0,visited,topo);
    g.shortestDijkastra(6,7);
	return 0;
}