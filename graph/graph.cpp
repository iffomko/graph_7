//
// Created by Iluha on 25.05.2022.
//

#include "graph.h"

graph::graph() {
    this->n = 0;
    this->Graph = nullptr;
}

graph::graph(int n) {
    this->n = n;
    this->Graph = new int*[this->n];

    for (int i = 0; i < this->n; i++)
        this->Graph[i] = new int[this->n]{};
}

graph::~graph() {
    delete[] this->Graph;
    this->Graph = nullptr;
}

void graph::fill(std::ifstream &fin) {
    int m;

    if (!fin) {
        std::cout << "Failed read the file with error\n";
    } else {
        if (this->Graph == nullptr) {
            fin >> this->n;

            this->Graph = new int*[this->n];

            for (int i = 0; i < this->n; i++)
                this->Graph[i] = new int[this->n]{};
        }

        std::cout << "Read the file successful\n";

        fin >> m;

        for (int i = 0; i < m; i++) {
            int v1, v2;

            fin >> v1 >> v2;

            this->Graph[v1][v2] = 1;
            this->Graph[v2][v1] = 1;
        }
    }

    fin.close();
}

int graph::getCountV() const {
    return this->n;
}

int **graph::getGraph() {
    return this->Graph;
}