//
// Created by Iluha on 25.05.2022.
//

#pragma once
#ifndef GRAPH_7_GRAPH_H
#define GRAPH_7_GRAPH_H

#include <iostream>
#include <fstream>

class graph {
    int n;
    int** Graph;
public:
    graph();
    explicit graph(int n);
    ~graph();

    void fill(std::ifstream &fin);

    int getCountV() const;
    int** getGraph();
};


#endif //GRAPH_7_GRAPH_H
