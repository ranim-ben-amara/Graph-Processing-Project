// Include necessary packages below
#include <iostream>
#include "Graph.h"
// End of packages inclusion

//-----------------------------//

// namespace specification
using namespace std;






int main(int argc, char *argv[]) {


    // Specify the name of the file containing the graph and its path below
    string file_name= "/Users/mariemloukil/Documents/graph_project/bn-65-1K.txt";

    //Initializing an empty graph
    Graph graph;

    //calling the method creating the graph
    graph.create_graph(file_name);

    // print the created graph
    graph.print_graph();


    return 0;

}
