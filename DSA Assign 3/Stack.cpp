#include "stack.h"

Stack::Stack() 
{
    top = nullptr;
}

Stack::~Stack() 
{
    while (!isEmpty()) 
    {
        pop();
    }
}

void Stack::push(int value) 
{
    StackNode* newNode = new StackNode{ value, top };
    top = newNode;
}

int Stack::pop() 
{
    if (isEmpty()) 
    {
        cout << "Stack underflow!" << endl;
        return -1;
    }
    StackNode* temp = top;
    int value = temp->data;
    top = top->next;
    delete temp;
    return value;
}

int Stack::peek() 
{
    if (isEmpty()) 
    {
        cout << "Stack is empty!" << endl;
        return -1;
    }
    return top->data;
}

bool Stack::isEmpty() 
{
    return top == nullptr;
}

void Stack::display() 
{
    StackNode* temp = top;
    while (temp) 
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}