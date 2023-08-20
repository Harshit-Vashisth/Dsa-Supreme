#include<bits/stdc++.h>
using namespace std;

class Graph{
    public : 
    unordered_map<int,list<pair<int,int>>> adj;
    void addedge(int u, int v,int wt,int direct){
        adj[u].push_back({v,wt});
        if(direct==1)
           adj[v].push_back({u,wt}); 
    }
    void printAdjList() {
		for(auto i: adj) {
			cout << i.first <<"-> ";
			for(auto j: i.second) {
				cout << "(" << j.first<<", "<<j.second<<"), ";
			}
			cout << endl;
		}
	}
};
int main(){
    Graph g;
    g.addedge(0,1,1);
    g.addedge(1,2,1);
    g.addedge(2,3,1);
    g.addedge(2,4,1);
    g.addedge(3,5,1);
    g.addedge(4,6,1);
    g.addedge(5,7,1);
    g.addedge(6,7,1);
    g.print();
    g.shortestpathBFS(0,6);
}