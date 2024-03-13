# Graphs and Trees Algorithms

This repository contains commonly used data structures and algorithms related to trees and graphs.

## Algorithms Included

### **1. Binary Lifting**: 
Technique for efficiently computing the ancestor or descendant of a node at a given distance in a tree.
   
*Example*: In competitive programming, binary lifting can be utilized to efficiently solve problems involving tree queries, such as finding the distance between two nodes in a tree or determining the ancestors of a given node.

### **2. Dijkstra's Algorithm**: 
Finds the shortest path between nodes in a graph with non-negative edge weights.

*Example*: Dijkstra's algorithm is often employed in competitive programming tasks involving finding the shortest path between two points in a weighted graph, such as navigating a maze or optimizing the travel time between cities in a transportation network.

### **3. Disjoint Set Union (DSU)**: 
Data structure for maintaining a set of elements partitioned into disjoint subsets.

*Example*: In competitive programming challenges involving connectivity problems, DSU can be used to efficiently merge and query disjoint sets, such as determining the number of connected components in an undirected graph or finding the size of the largest connected component.

### **4. Strongly Connected Components (SCC)**: 
Subsets of vertices in a directed graph where every vertex is reachable from every other vertex in the same subset.

*Example*: SCC algorithms are crucial in competitive programming tasks involving directed graphs, such as identifying cycles or determining the reachability between different nodes in a network.


## To be Included soon 

### **1. Cycle Finding**: 
Algorithms to detect cycles within a graph.

*Example*: In competitive programming problems involving detecting cycles in a graph, cycle finding algorithms can be used to identify and handle scenarios like deadlock detection or detecting negative cycles in weighted graphs.

### **2. Floyd-Warshall**: 
Finds the shortest paths between all pairs of vertices in a weighted graph with positive or negative edge weights.

*Example*: In competitive programming challenges involving solving all-pairs shortest path problems, Floyd-Warshall algorithm can be utilized to efficiently compute the shortest paths between every pair of nodes in a graph, such as determining the fastest way to travel between different cities in a transportation network.

### **3. Bellman-Ford**: 
Finds the shortest path from a single source vertex to all other vertices in a weighted graph, even with negative weight edges.

*Example*: Bellman-Ford algorithm is commonly used in competitive programming tasks involving finding the shortest path from a single source to all other nodes in a graph, such as determining the minimum cost to reach various destinations in a transportation network.
Another usecase of Bellman Ford is to determine if there are any negative cycles present in a graph.

### **4. Binary Tree Traversals**: 
Methods for visiting each node in a binary tree in a systematic way, including in-order, pre-order, and post-order traversals.

### **5. Euler Tour (Tree Flattening)**: 
Technique to transform a tree into an array representation for efficiently answering subtree queries.

*Example*: In competitive programming tasks involving trees, Euler tour can be employed to efficiently handle subtree queries, such as determining the sum or maximum value of nodes within a subtree.

### **6. Topological Sorting**: 
Orders the vertices of a directed graph such that for every directed edge `u -> v`, vertex u comes before vertex v in the ordering.

*Example*: In problems where we have to tell the sequence in which we should perform some tasks such that if `task t2` depends on `task t1` then t1 is completed before t2.

### **7. Minimum Spanning tree**:
The Minimum Spanning Tree algorithm is used to find the subset of edges in a connected, undirected graph that connects all the vertices together without any cycles and with the minimum possible total edge weight.

- Prim's Algorithm
- Kruskal's Algorithm

*Examples*: In competitive programming, MST algorithms are commonly used in problems involving connectivity and optimization, such as finding the minimum cost to connect cities with roads or cables.
