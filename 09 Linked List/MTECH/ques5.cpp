#include <iostream>
#include <vector>

using namespace std;

bool isSafe(int node, vector<vector<int>>& graph, vector<int>& color, int c) {
    for (int i = 0; i < graph[node].size(); i++) {
        if (graph[node][i] == 1 && color[i] == c)
            return false;
    }
    return true;
}

bool graphColoringUtil(vector<vector<int>>& graph, int m, vector<int>& color, int node) {
    if (node == graph.size()) 
        return true;
    
    for (int c = 1; c <= m; c++) {
        if (isSafe(node, graph, color, c)) {
            color[node] = c;
            if (graphColoringUtil(graph, m, color, node + 1))
                return true;
            color[node] = 0;
        }
    }
    return false;
}

bool graphColoring(vector<vector<int>>& graph, int m) {
    vector<int> color(graph.size(), 0);
    if (graphColoringUtil(graph, m, color, 0)) {
        for (int i = 0; i < graph.size(); i++) {
            cout << "District " << i + 1 << " ---> Color " << color[i] << endl;
        }
        return true;
    }
    return false;
}

int main() {
    int n = 8; // Number of districts (for illustration, you can adjust based on the map)
    vector<vector<int>> graph = {
        {0, 1, 0, 0, 1, 0, 0, 0},
        {1, 0, 1, 0, 1, 1, 0, 0},
        {0, 1, 0, 1, 0, 1, 1, 0},
        {0, 0, 1, 0, 0, 0, 1, 1},
        {1, 1, 0, 0, 0, 1, 0, 0},
        {0, 1, 1, 0, 1, 0, 0, 1},
        {0, 0, 1, 1, 0, 0, 0, 1},
        {0, 0, 0, 1, 0, 1, 1, 0}
    };

    int m = 3; // Number of colors
    if (!graphColoring(graph, m))
        cout << "Solution does not exist" << endl;

    return 0;
}
