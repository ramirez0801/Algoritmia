#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<vector<int>>& graph, vector<bool>& visited) {
    // Mark the current node as visited
    visited[node] = true;

    // Process the current node
    cout << "Visited Node: " << node << endl;

    // Traverse adjacent nodes
    for (int i = 0; i < graph[node].size(); ++i) {
        int neighbor = graph[node][i];
        if (!visited[neighbor]) {
            dfs(neighbor, graph, visited);
        }
    }
}

void dfsWrapper(vector<vector<int>>& graph) {
    int n = graph.size(); // Number of nodes in the graph
    vector<bool> visited(n, false); // Mark all nodes as unvisited

    // Start DFS from each unvisited node
    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            dfs(i, graph, visited);
        }
    }
}

int main() {
    // Example graph represented as an adjacency list
    vector<vector<int>> graph = {
        {1, 2},       // Node 0 is connected to Node 1 and Node 2
        {0, 3, 4},    // Node 1 is connected to Node 0, Node 3, and Node 4
        {0, 5},       // Node 2 is connected to Node 0 and Node 5
        {1},          // Node 3 is connected to Node 1
        {1},          // Node 4 is connected to Node 1
        {2, 6},       // Node 5 is connected to Node 2 and Node 6
        {5}           // Node 6 is connected to Node 5
    };

    dfsWrapper(graph); // Call DFS on the graph

    return 0;
}
