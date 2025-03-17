#pragma once
#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
using namespace std;

struct QueueNode
{
    int data;
    QueueNode* next;
};

class Queue
{
private:
    QueueNode* front;
    QueueNode* rear;
public:
    Queue();
    ~Queue();
    void iAe(int value);
    int dAe();
    int axis();
    bool isEmpty();
    void display();
};

#endif
