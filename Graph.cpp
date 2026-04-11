#include <iostream>
#include <vector>
#include <chrono>
#include <unordered_map>
#include <fstream>
#include "Graph.h"
#include "metrics.h"

using namespace std;


// add_edge_unweighted a method that adds an edge to the graph
void Graph::add_edge_unweighted(int a, int b) {
    adj_out[a].push_back(b);
    adj_in[b].push_back(a);
}

// create_graph is the method that iteratively adds edges to the graph
void Graph::create_graph(string graph_file) {
    ifstream infile(graph_file);

    int a, b;
    while (infile >> a >> b) {
        this->add_edge_unweighted(a, b);
    }
    infile.close();
}







// print_graph prints the content of a graph
void Graph::print_graph() {
    for (auto& x : this->adj_out) {
        std::cout << x.first << ": [";
        for (auto it = x.second.begin(); it != x.second.end(); ++it)
            std::cout << ' ' << *it;
        std::cout << "]" << "\n";
    }
}


