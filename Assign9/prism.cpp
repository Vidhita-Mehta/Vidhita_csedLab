#include <iostream>
#include <list>
#include <limits.h>
using namespace std;

class Graph {
public:
    int V;
    list<pair<int,int>> *adj;  // (neighbor, weight)

    Graph(int V) {
        this->V = V;
        adj = new list<pair<int,int>>[V];
    }

    void addEdge(int u, int v, int w) {
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
};

// Finds vertex with minimum key that is not yet included
int findMinKey(int key[], bool mstSet[], int V) {
    int minVal = INT_MAX;
    int minIndex = -1;

    for (int i = 0; i < V; i++) {
        if (!mstSet[i] && key[i] < minVal) {
            minVal = key[i];
            minIndex = i;
        }
    }
    return minIndex;
}

int main() {
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    Graph g(V);

    cout << "Enter edges (u v w):\n";
    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        g.addEdge(u, v, w);
    }

    // Arrays required by Prim
    int parent[V];          // store MST
    int key[V];             // key values (min weight to add vertex)
    bool mstSet[V] = {0};   // included in MST?

    // Initialize keys to infinity
    for (int i = 0; i < V; i++)
        key[i] = INT_MAX;

    // Start MST from vertex 0
    key[0] = 0;
    parent[0] = -1; // root of MST

    // Prim’s main loop
    for (int count = 0; count < V - 1; count++) {

        // Pick the vertex with the minimum key
        int u = findMinKey(key, mstSet, V);
        mstSet[u] = true;

        // Explore neighbors of u
        for (auto nbr : g.adj[u]) {
            int v = nbr.first;
            int w = nbr.second;

            if (!mstSet[v] && w < key[v]) {
                key[v] = w;
                parent[v] = u;
            }
        }
    }

    // Print MST
    cout << "\nMST using Prim:\n";
    int total = 0;

    for (int i = 1; i < V; i++) {
        cout << parent[i] << " - " << i << " : " << key[i] << endl;
        total += key[i];
    }

    cout << "Total Weight = " << total << endl;

    return 0;
}

