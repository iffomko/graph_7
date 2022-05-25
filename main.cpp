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

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            std::cout << Graph.getGraph()[i][j] << " ";

        std::cout << std::endl;
    }

    queue q(n);
    bool* used = new bool[n]{};

    int key, count;

    std::cout << "Enter number of top: ";
    std::cin >> key;

    for (int i = 0; i < n; i++) {
        bfs(Graph, used, count, key, i);
        std::cout << "From " << i + 1 << " to " << key << " length: " << count << std::endl;

        for (int j = 0; j < n; j++)
            used[j] = false;
    }

    return 0;
}
