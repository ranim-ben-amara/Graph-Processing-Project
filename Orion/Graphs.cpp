
#include "Graphs.h"
Graphs::Graphs(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graphs::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
    adj[w].push_back(v);
}

/*void Graphs::print_graph() {
    for (auto x: adj[V]) {
        std::cout << x. << ": [";
        for (auto it = x.second.begin(); it != x.second.end(); ++it)
            std::cout << ' ' << *it;
        std::cout << "]" << "\n";
    }
} */

// A BFS based function to check whether d is reachable from s.
bool Graphs::isReachable(int s, int d)
{
    // Base case
    if (s == d)
        return true;

    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    // Create a queue for BFS
    list<int> queue;

    // Mark the current node as visited and enqueue it
    visited[s] = true;
    queue.push_back(s);

    // it will be used to get all adjacent vertices of a vertex
    list<int>::iterator i;

    while (!queue.empty())
    {
        // Dequeue a vertex from queue and print it
        s = queue.front();
        queue.pop_front();

        // Get all adjacent vertices of the dequeued vertex s
        // If a adjacent has not been visited, then mark it visited
        // and enqueue it
        for (i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            // If this adjacent node is the destination node, then
            // return true
            if (*i == d)
                return true;

            // Else, continue to do BFS
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }

    // If BFS is complete without visiting d
    return false;
}

int Graphs::verticePopularity() {
    list<int>::iterator i;
    int k[V];
    int f;
    int vertices[V];
    int highest =0;
    for(int j =0;j<V;j++) {
        k[j]=0;
        vertices[j]=j;
        for (i = adj[j].begin(); i != adj[j].end(); i++) {
            k[j]++;
        }
    }
    for(int u =0;u<V;u++){
        if(k[u]>highest) {
            highest = k[u];
            f = vertices[u];
        }

    }

    return f;
}

