#include <iostream>
#include <fstream>

#include "queue/queue.h"
#include "graph/graph.h"

int main() {
    std::ifstream fin(R"(C:\Users\Iluha\Documents\github_repos\graph_7\input.txt)");

    graph Graph;
    Graph.fill(fin);

    int n = Graph.getCountV();

    queue q(n);
    bool* used = new bool[n]{};

    for (int i = 0; i < n; i++) {
        used[i] = true;


    }

    return 0;
}
