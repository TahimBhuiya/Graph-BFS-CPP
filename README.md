# Breadth-First Search (BFS) in C++

## 📌 Overview

This C++ program demonstrates the **Breadth-First Search (BFS)** algorithm, a fundamental graph traversal method that explores nodes **level by level** using a queue.

Steps BFS follows:

1. Starts from a chosen source node.
2. Visits all immediate neighbors first.
3. Moves outward layer by layer.
4. Ensures the shortest path (in edges) in unweighted graphs.

It prints the BFS traversal order starting from node `0`.

---

## 🔧 Features

- **Queue-Based Traversal** (FIFO order)
- **Level-by-Level Exploration**
- **Shortest Path for Unweighted Graphs**
- **Adjacency List Graph Representation**
- **Fully Commented Code** for easy understanding

---

## 📋 Example Run

**Graph Structure:**

```
0: 1, 2
1: 0, 3, 4
2: 0, 4
3: 1, 5
4: 1, 2, 5
5: 3, 4
```

**Output:**

```
BFS Traversal starting from node 0: 0 1 2 3 4 5
```

---

## ⚙ How It Works

1. **Initialize a Queue**

   - Mark the starting node as visited.
   - Enqueue the starting node.

2. **Process Each Node**

   - Dequeue a node.
   - Print/visit it.
   - Enqueue all unvisited neighbors.

3. **Repeat Until Queue Is Empty**
   - BFS continues until all reachable nodes are visited.

---

## 🛠 How to Run

### 1️⃣ Using a local C++ compiler

Save the code as `bfs-graph.cpp` and then compile/run:

```bash
g++ bfs-graph.cpp -o bfs
./bfs
```

### 2️⃣ Using an online C++ compiler

You can paste and run the code using:

- Programiz
- Replit
- GeeksforGeeks IDE
- CPP.sh
