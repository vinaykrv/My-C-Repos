// Graph

// A graph is a collection of points (called nodes or vertices) and lines (called edges) that connect them. 
// Graphs are used to represent relationships between things.
// Trees are special type of a graph where 1) there is always a path (through multiple nodes) to reach one node to another. 2) trees are acyclic.
// graphs are used bcz there is some form/type of data is not stored in trees, like social networks and road networks.
// a single node is also a graph.

// Terminologies -
// Node/Vertex: Each point on the graph.
// Edge: The line connecting two nodes.
// Path: A way to move from one node to another using connected edges in a graph where no node is repeated.
// a node can not appear twice in a path.
// Cycle: A path that starts and ends at the same node.
// Degree: No. of edges attached to a single node in undirected graph. Total Degree in a graph = 2*(no. of edges)
// Degree: In-degree and Out-degree in directed graph.
// Connected graph : a graph in which there is possible path to go from one node to any other node.
// Connnected components : when two or more connected-graphs are not inter-connected then each individual connected graph is known as connected components. these connected components are part of same single common graph.

// min. edges to make a graph of n nodes connected => n-1
// Complete graph => each node is directly connected to every other node. no. of edges => n(n-1)/2
// if there is a algo on no. of edges then in worst case it is O(n^2) in terms of no. of vertices.





