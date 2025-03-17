#pragma once
#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;

struct StackNode
{
    int data;
    StackNode* next;
};

class Stack
{
private:
    StackNode* top;
public:
    Stack();
    ~Stack();
    void iAs(int value);
    int dAs();
    int access();
    bool isEmpty();
    void display();
};

#endif
