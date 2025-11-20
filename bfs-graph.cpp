#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Function to perform BFS starting from a given node
void BFS(int start, vector<vector<int>>& graph) {
    int n = graph.size();               // Number of nodes in the graph
    vector<bool> visited(n, false);     // Keeps track of visited nodes
    queue<int> q;                       // Queue for BFS

    visited[start] = true;              // Mark start as visited
    q.push(start);                      // Add start to the queue

    cout << "BFS Traversal starting from node " << start << ": ";

    while (!q.empty()) {
        int node = q.front();           // Get front node
        q.pop();                        // Remove it
        cout << node << " ";            // Visit the node

        // Traverse all neighbors
        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {   // Visit only if unvisited
                visited[neighbor] = true;
                q.push(neighbor);       
            }
        }
    }

    cout << endl;
}


int main() {
    // Example graph with 6 nodes
    vector<vector<int>> graph = {
        {1, 2},      
        {0, 3, 4},   
        {0, 4},
    
    
    
    
    }