//
// Created by user on 7‏/1‏/2022.
//


#ifndef GRAPH_PROJECT_GRAPH_H
#include <iostream>
#include <list>
#include <set>
#include <vector>
#include <chrono>
#include <unordered_map>

using namespace std;

class Graph{

public:


    unordered_map< int, set<int> > adj_out; // map to store the out-going edges
    unordered_map< int, set<int> > adj_in;  // map to store in-going edges

    //map< int,set<double> > weight;

    void  add_edge_unweighted(int a, int b) ;

    void print_graph();

    void create_graph(std::string graph_file) ;

    //void print_info(std::string a);
};

#define GRAPH_PROJECT_GRAPH_H

#endif //FILES_LIST_SEQUENTIAL_GRAPH_H
