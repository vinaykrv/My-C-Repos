// how to poulate adjacency matrix.
// we can modify same code for directed graph.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;  // Number of nodes.
    int m ;  // Number of edges.

    cin>> n >> m;

    vector<vector<int>> mat(n + 1, vector<int>(n + 1, 0));  // n+1 to handle 1-based indexing. if not not do n+1 then it make vector for nodes  0,1, 2 and node 3 is not included.

    // Populate the adjacency matrix.
    for (int i = 0; i < m; i++) {
        int u,v, wt;                    // u and v are nodes attached with an edge and wt is weight of that edge.
        cin>> u >> v >> wt;

        mat[u][v] = wt;   // Mark edge from u to v.
        mat[v][u] = wt;   // Mark edge from v to u for undirected graph.
    }

    // Print the adjacency matrix.    
    for (int i = 0; i <= n; i++) {                     // to ignore the 0-th row and column use i=1 and j=1.
        for (int j = 0; j <= n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
