#include <iostream>
#include <vector>
#include <queue>

using namespace std;
bool IS_BARBATITE(const vector<vector<int>>& graph) {
    int n = graph.size();
    vector<int> colors(n, -1); // Initialize colors for vertices, -1 represents uncolored
    queue<int> q;

    for (int i = 0; i < n; i++) {
        if (colors[i] == -1) {
            colors[i] = 0; // Assign color 0 to the starting vertex
            q.push(i);

            while (!q.empty()) {
                int curr = q.front();
                q.pop();

                for (int neighbor : graph[curr]) {
                    if (colors[neighbor] == -1) {
                        colors[neighbor] = 1 - colors[curr]; // Assign opposite color to the neighbor
                        q.push(neighbor);
                    } else if (colors[neighbor] == colors[curr]) {
                        return false; // Two adjacent vertices have the same color, not bipartite
                    }
                }
            }
        }
    }

    return true; // All vertices are colored without any conflicts, graph is bipartite
}
vector<vector<int>> takeInput() {
    int vertices, edges;
    cout << "Enter the number of vertices: ";
    cin >> vertices;
    cout << "Enter the number of edges: ";
    cin >> edges;
    vector<vector<int>> graph(vertices);
    cout << "Enter the edge connections (vertex1 vertex2):" << endl;
    for (int i = 0; i < edges; i++) {
        int vertex1, vertex2;
        cin >> vertex1 >> vertex2;

        // Add edges to the adjacency list
        graph[vertex1].push_back(vertex2);
        graph[vertex2].push_back(vertex1);
    }

    return graph;
}

int main() {
    
    vector<vector<int>> graph = takeInput();
    bool OUTPUT = IS_BARBATITE(graph);
    if(OUTPUT){
        cout<<"Graph is Barbatite"<<endl;
    }
    else{
        cout<<"No graph is not barbatite"<<endl;
    return 0;
}
}
