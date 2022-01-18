//include the necessary packages below
#include <iostream>
#include <vector>
#include <chrono>
#include <unordered_map>
#include <fstream>
#include "Graph.h"
#include "metrics.h"
//--------------------------

// Namespace specification
using std::vector;
using namespace std;


// Graph methods implementation


// add_edge_unweighted a method that adds an edge to the graph
void Graph::add_edge_unweighted(int a, int b) {
    adj_out[a].push_back(b);

    adj_in[b].push_back(a);
}

// create_graph is the method that iteratively adds edges to the graph
void Graph::create_graph(string graph_file) {
    // accessing the file containing the data
    ifstream infile;

    infile.open(graph_file); //opening the file

    int a, b; // variables to store the values of each line of the file
    // initalizing the time counter
    time_point<system_clock, duration<long, std::ratio<1, 1000000000>>>
            start = chrono::system_clock::now();

    while (infile >> a >> b) { // while there are still values to read (file didn't end)
            // calling add_edge_unweighted for each line of file
            this->add_edge_unweighted(a, b);

        }
        //closing the file once done
        infile.close();
    //calculate_total_time(start);
    //calculate_peak_RAM();
    }







// print_graph prints the content of a graph
void Graph::print_graph() {

    for ( auto x: this->adj_out) {
        std::cout << x.first << ": [";
        for (auto it = x.second.begin(); it != x.second.end(); ++it)
            std::cout << ' ' << *it;
        std::cout << "]" << "\n";
    }
}


