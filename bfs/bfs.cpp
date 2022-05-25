//
// Created by Iluha on 25.05.2022.
//

#include "bfs.h"

void bfs(graph &Graph, queue &q, bool* used) {
    int current = 0;
    used[current] = true;

    std::cout << current + 1 << std::endl;

    for (int i = 0; i < Graph.getCountV(); i++)
        if (Graph.getGraph()[current][i] == 1)
            q.push(i);

    while (!q.isEmpty()) {
        current = q.pop();
        used[current] = true;

        std::cout << current + 1 << std::endl;

        for (int i = 0; i < Graph.getCountV(); i++) {
            if (Graph.getGraph()[current][i] == 1 && !used[i] && !q.isExist(i))
                q.push(i);
        }
    }
}