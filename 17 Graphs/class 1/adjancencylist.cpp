#include<bits/stdc++.h>
using namespace std;
class Graph{
    public:
    unordered_map<int,list<int>> adjlist;
    void addedge(int u,int v,bool direct){
        adjlist[u].push_back(v);
        if(direct==0)
           adjlist[v].push_back(u); 
    }
    void printadj(){
        for(auto i:adjlist){
            cout<<i.first<<" -> ";
            for(auto nbr:i.second)
                cout<<nbr<<" , ";
        }
    }
};
int main(){
    Graph g;
    g.addedge(0,1,1);
    g.addedge(1,2,1);
    g.addedge(2,1,1);
    g.addedge(3,1,1);
    g.addedge(3,4,1);
    g.addedge(4,3,1);
    g.printadj();
}