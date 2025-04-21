// DFS

// T.C - o(v+E)

#include <iostream>
#include <vector>
using namespace std;

void DFS(int node, vector<int> adj[], vector<bool> &visited) {
    visited[node] = true;
    cout << node << " ";

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            DFS(neighbor, adj, visited);
        }
    }
}

int main() {
    int V = 5; // Number of vertices
    vector<int> adj[V]; // Adjacency list

    // Example edges (undirected graph)
    adj[0].push_back(1);
    adj[1].push_back(0); // Edge in both directions for undirected graph

    adj[0].push_back(2);
    adj[2].push_back(0); // Edge in both directions for undirected graph

    // adj[1].push_back(3);
    // adj[3].push_back(1); // Edge in both directions for undirected graph

    // adj[2].push_back(4);
    // adj[4].push_back(2); // Edge in both directions for undirected graph

    vector<bool> visited(V, false); // Visited array

    // Perform DFS starting from vertex 0
    DFS(0, adj, visited);

    return 0;
}
