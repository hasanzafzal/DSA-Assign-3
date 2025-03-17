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
    void push(int value);
    int pop();
    int peek();
    bool isEmpty();
    void display();
};

#endif