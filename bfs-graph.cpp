#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Function to perform BFS starting from a given node
void BFS(int start, vector<vector<int>>& graph) {
    int n = graph.size();               // Number of nodes
    vector<bool> visited(n, false);     // To track visited nodes
    queue<int> q;                       // Queue for BFS

    visited[start] = true;              // Mark the start node
    q.push(start);                      // Push start node into queue

    cout << "BFS Traversal starting from node " << start << ": ";

    while (!q.empty()) {
        int node = q.front();           // Front of queue
        q.pop();                        
    }



}