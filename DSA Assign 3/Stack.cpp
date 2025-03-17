#include "stack.h"

Stack::Stack()
{
    top = nullptr;
}

Stack::~Stack()
{
    while (!isEmpty())
    {
        dAs();
    }
}

void Stack::iAs(int value)
{
    StackNode* newNode = new StackNode{ value, top };
    top = newNode;
}

int Stack::dAs()
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

int Stack::axis()
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
