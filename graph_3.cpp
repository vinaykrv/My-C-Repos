// Graph Representation using Adjacency Matrix

// adjacency matrix is costly in terms of space. uses n^2 space.

#include <iostream>
#include <vector>

using namespace std;

class Graph {
public:
    // Constructor to initialize the graph with a given number of vertices
    Graph(int vertices) {
        this->vertices = vertices;
        // Create a vertices x vertices matrix initialized to 0
        adjMatrix.resize(vertices, vector<int>(vertices, 0));
    }

    // Function to add an edge
    void addEdge(int u, int v) {
        adjMatrix[u][v] = 1; // Mark edge from u to v
        adjMatrix[v][u] = 1; // Mark edge from v to u (undirected)
    }

    // Function to display the graph
    void display() {
        for (int i = 0; i < vertices; i++) {
            for (int j = 0; j < vertices; j++) {
                cout << adjMatrix[i][j] << " "; // Print 1 or 0
            }
            cout << endl;
        }
    }

private:
    int vertices;                // Number of vertices
    vector<vector<int>> adjMatrix; // Adjacency matrix
};

int main() {
    Graph g(5); // Create a graph with 5 vertices

    // Adding edges
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    // Display the graph
    g.display();

    return 0;
}
