// how to populate Adjacency list(vector of vector).

// adjacency list is representation of graph in which each index of outer array/vector is node and inner vector at each node stores its neigbhours.
// space 2*m.

// if we want to include weights on edges then we need to declare vector<pair<int,int>> adj[n+1]; in each pair we store neigbhour and its weight.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    int m;
    cin >> n >> m;

    vector<int> adj[n + 1];    // yaha pe array ka har element jo ki vector hai wo empty hai. n+1 bcz of 1 based indexing 0-based main n include nahi hota sirf n-1 tak include hote hai.

    for (int i = 0; i < m; i++)
    {
        int u;
        int v;

        cin >> u >> v;

        adj[u].push_back(v); // yaha pr for eg - graph main 4 ka neigbhour hai 2 toh adj[4] jo ki ek vector hai uss main push_back 2 krre hai aur next line main adj[2] jo ki ek vector hai uss main 4 push_back krre hai.
        adj[v].push_back(u);
    }

  // Print the adjacency list.
    for (int i = 1; i <= n; i++) {            // i=1 bcz of 1-based indexing.

        cout << i << " and its neighbours ";
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout<<adj[i][j]<<" ";
        }
        
        cout << endl;
    }

    return 0;
}
