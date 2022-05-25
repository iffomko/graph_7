//
// Created by Iluha on 25.05.2022.
//

#include "queue.h"

queue::queue() {
    this->size = 15;
    this->count = 0;
    this->data = new int[this->size];
}

queue::queue(int size) {
    this->size = size;
    this->count = 0;
    this->data = new int[this->size];
}

queue::~queue() {
    delete[] this->data;
    this->data = nullptr;
}

bool queue::push(int item) {
    if (this->count < this->size) {
        this->data[this->count++] = item;
        return true;
    }

    return false;
}

int queue::pop() {
    if (this->count > 0) {
        int item = this->data[0];

        for (int i = 1; i < this->count; i++)
            this->data[i - 1] = this->data[i];

        this->count--;

        return item;
    }

    return -1;
}

bool queue::isEmpty() const {
    if (this->count == 0)
        return true;

    return false;
}

bool queue::isFull() const {
    if (this->count == this->size)
        return true;

    return false;
}

bool queue::isExist(int item) {
    for (int i = 0; i < this->count; i++)
        if (this->data[i] == item)
            return true;

    return false;
}