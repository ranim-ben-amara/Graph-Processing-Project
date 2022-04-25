
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

void Graphs::verticePopularity() {
    list<int>::iterator i;
    int vertices[2][V];
    int rank[3];
    int hole;
    for (int j = 0; j < V; j++) {
        vertices[0][j] = 0;
        vertices[1][j] = j;
        for (i = adj[j].begin(); i != adj[j].end(); i++) {
            vertices[0][j]++;
        }
    }
    for(int i=1001;i<1004;i++){
            for(int j = 1001;j<1003;j++){
                if(vertices[0][j]>vertices[0][j+1]){
                    hole=vertices[0][j+1];
                    vertices[0][j+1]=vertices[0][j];
                    vertices[0][j]=hole;

                    hole=vertices[1][j+1];
                    vertices[1][j+1]=vertices[1][j];
                    vertices[1][j]=hole;
                }
            }
        }

    for(int e =0;e<3;e++){
        rank[e]=vertices[1][e+1001];
    }

    for(int e =0;e<3;e++){
        cout<<rank[e]<<endl;
    }





}