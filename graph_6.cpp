// BFS traversal

// T.C - O(V+E) => the algorithm processes each node and each edge once, rather than processing all edges for every node.

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Function to perform BFS on the graph
void bfs(int start, const vector<vector<int>>& adj) {

    int n = adj.size();     // no. of nodes.

    vector<bool> visited(n, false);       // To track visited nodes.
    queue<int> q;

    // Start BFS from the 'start' node
    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";  // Print the current node

        // Visit all adjacent nodes
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    // Example graph represented as an adjacency list
    int n = 7; // Number of nodes
    vector<vector<int>> adj(n);

    // Construct the graph
    adj[0] = {1, 2}; // Node 0 is connected to 1 and 2
    adj[1] = {0, 3, 4}; // Node 1 is connected to 0, 3, and 4
    adj[2] = {0,5,6}; // Node 2 is connected to 0
    adj[3] = {1}; // Node 3 is connected to 1
    adj[4] = {1}; // Node 4 is connected to 1
    adj[5] = {2};// node 5 is connected to 2
    adj[6] = {2};  //// node 6 is connected to 2

    // Perform BFS starting from start node may be 0,1,2,3 and 4.
    int start=0;
    cout << "BFS traversal starting from node "<<start<<": ";
    bfs(start, adj);     // 0 is src/start node.
    cout << endl;

    return 0;
}
