//
// Created by Iluha on 25.05.2022.
//

#include "bfs.h"

void bfs(graph &Graph, queue &q, bool* used, int &count, const int &key, int current) {
    count = 0;

    if (current + 1 == key)
        return;

    used[current] = true;
    count++;

    for (int i = 0; i < Graph.getCountV(); i++)
        if (Graph.getGraph()[current][i] == 1) {
            q.push(i);

            if (i + 1 == key)
                return;
        }

    while (!q.isEmpty()) {
        current = q.pop();
        used[current] = true;
        count++;

        for (int i = 0; i < Graph.getCountV(); i++) {
            if (Graph.getGraph()[current][i] == 1 && !used[i] && !q.isExist(i)) {
                q.push(i);

                if (i + 1 == key)
                    return;
            }
        }
    }
}