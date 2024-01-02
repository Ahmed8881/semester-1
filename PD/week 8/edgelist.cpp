#include <iostream>
#include <vector>

using namespace std;

// Function to list the edges from adjacency matrix
void listEdges(const vector<vector<int>>& adjacencyMatrix) {
    int n = adjacencyMatrix.size();
    vector<pair<int, int>> edges;
    vector<int> edgeCount(n * n, 0);

    // Traverse the adjacency matrix
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (adjacencyMatrix[i][j] == 1) {
                edges.push_back({i, j});
                edgeCount[i * n + j]++;
            }
        }
    }

    // Print the edges and their counts
    for (const auto& edge : edges) {
        int u = edge.first;
        int v = edge.second;
        cout << "Edge (" << u << ", " << v << ") appears " << edgeCount[u * n + v] << " times\n";
    }
}

int main() {
    // Example adjacency matrix
    vector<vector<int>> adjacencyMatrix = {
        {0, 1, 1, 0},
        {1, 0, 0, 1},
        {1, 0, 0, 1},
        {0, 1, 1, 0}
    };

    // Call the function to list the edges
    listEdges(adjacencyMatrix);

    return 0;
}
