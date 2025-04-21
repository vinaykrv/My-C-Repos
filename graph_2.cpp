// Graph Representation using Adjacency List.

// Adjacency list cost less than Adjacency matrix.

#include <iostream>
#include <vector>

using namespace std;

class Graph {
public:
    // Constructor to initialize the graph with a given number of vertices
    Graph(int vertices) {
        this->vertices = vertices;
        adjList.resize(vertices); // Resize the adjacency list
    }

    // Function to add an edge
    void addEdge(int u, int v) {
        adjList[u].push_back(v); // Add v to u's list
        adjList[v].push_back(u); // Since it's undirected, add u to v's list
    }

    // Function to display the graph
    void display() {
        for (int i = 0; i < vertices; i++) {
            cout << "Vertex " << i << ": ";
            for (int neighbor : adjList[i]) {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }

private:
    int vertices;                    // Number of vertices
    vector<vector<int>> adjList;     // Adjacency list
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
