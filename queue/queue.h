//
// Created by Iluha on 25.05.2022.
//

#pragma once
#ifndef GRAPH_7_QUEUE_H
#define GRAPH_7_QUEUE_H


class queue {
    int *data;
    int size;
    int count;
public:
    queue();
    explicit queue(int size);
    ~queue();

    bool push(int item);
    int pop();

    bool isEmpty() const;
    bool isFull() const;
};


#endif //GRAPH_7_QUEUE_H
