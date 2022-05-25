#include <iostream>
#include <fstream>

#include "queue/queue.h"
#include "graph/graph.h"
#include "bfs/bfs.h"

int main() {
    std::ifstream fin(R"(C:\Users\Iluha\Documents\github_repos\graph_7\input.txt)");

    graph Graph;
    Graph.fill(fin);

    int n = Graph.getCountV();

    queue q(n);
    bool* used = new bool[n]{};

    int key = 4, count;

    for (int i = 0; i < n; i++) {
        bfs(Graph, q, used, count, key, i);

        std::cout << "From " << i + 1 << " to " << key << " length: " << count << std::endl;
    }

    return 0;
}
