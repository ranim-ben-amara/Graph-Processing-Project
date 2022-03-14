// C++ program to check if there is exist a path between two vertices
// of a graph.
#include<iostream>
#include <list>
using namespace std;

// This class represents a directed graph using adjacency list
// representation
class Graphs
{
    int V;    // No. of vertices
    list<int> *adj;    // Pointer to an array containing adjacency lists

public:
    Graphs(int V);  // Constructor
    void addEdge(int v, int w); // function to add an edge to graph
    bool isReachable(int s, int d);
    int verticePopularity();
};


 