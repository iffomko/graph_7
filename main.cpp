#include <iostream>
#include <fstream>

#include "queue/queue.h"
#include "graph/graph.h"
#include "bfs/bfs.h"

int main() {
    std::ifstream fin(R"(C:\Users\Iluha\Documents\github_repos\graph_7\input.txt)");

    graph Graph;
    Graph.fill(fin); // is mistake

    int n = Graph.getCountV();

    queue q(n);
    bool* used = new bool[n]{};

    bfs(Graph, q, used);

    return 0;
}
