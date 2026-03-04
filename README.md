# Graph Processing Project

[![Open in Visual Studio Code](https://img.shields.io/badge/Open%20in-VSCode-blue?logo=visualstudiocode)](https://classroom.github.com/online_ide?assignment_repo_id=6723891&assignment_repo_type=AssignmentRepo)

## Overview

This project implements a **directed graph data structure** in C++ with capabilities for loading graph data from files, storing both incoming and outgoing edges, and analyzing graph metrics. It's designed to work with large graph datasets efficiently.

## Project Structure

### Main Components

- **Graph.h / Graph.cpp** - Core graph data structure implementation
  - Uses unordered maps to store adjacency lists for both outgoing (`adj_out`) and incoming (`adj_in`) edges
  - Implements key methods:
    - `add_edge_unweighted()` - Adds edges to the graph
    - `create_graph()` - Loads graph from file
    - `print_graph()` - Displays graph structure

- **metrics.h / metrics.cpp** - Performance and resource monitoring
  - `calculate_total_time()` - Measures elapsed time for graph creation
  - `calculate_peak_RAM()` - Tracks peak memory usage
  - `add_result_to_file()` - Logs results to file

- **main.cpp** - Entry point for graph creation and testing

- **CMakeLists.txt** - CMake build configuration (C++14 standard)

### Data Files

- **bn-65-1K.txt** - Sample graph dataset (1140 edges)
  - Format: Each line contains two space-separated integers representing an edge from node A to node B

### Additional Directories

- **Orion/** - Alternative implementation with additional graph functionality
- **untitled6/** - Experimental or alternative version  
- **Orionsiteweb/** - Web interface components (HTML/CSS/JS)
- **build/** - Ninja build system output
- **cmake-build-debug/** - CMake debug build artifacts

## Building the Project

### Prerequisites

- C++14 compatible compiler
- CMake 3.17.3 or higher

### Compilation

```bash
mkdir -p build
cd build
cmake ..
cmake --build .
```

### Running

```bash
./files_list
```

## Features

- **Efficient Graph Storage** - Uses hash maps for O(1) average edge lookup
- **Bidirectional Edge Tracking** - Maintains both outgoing and incoming edge lists
- **Performance Monitoring** - Built-in timing and memory usage metrics
- **File-based Input** - Loads graph definitions from text files

## Usage Example

```cpp
Graph graph;
graph.create_graph("path/to/graph_file.txt");
graph.print_graph();
```

## Format Requirements

Input graph files should be formatted as:

```text
node_a node_b
node_c node_d
...
```

Each line represents a directed edge from the first node to the second node.

## Notes

- The current hardcoded file path in main.cpp should be updated to accept command-line arguments
- metrics.cpp has platform-specific code (Linux /proc/self/status) that may need adjustment for other OSes
- The project includes multiple experimental versions in separate directories for testing different approaches
