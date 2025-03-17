#include "queue.h"

Queue::Queue() 
{
    front = rear = nullptr;
}

Queue::~Queue() 
{
    while (!isEmpty()) 
    {
        dequeue();
    }
}

void Queue::enqueue(int value) 
{
    QueueNode* newNode = new QueueNode{ value, nullptr };
    if (rear) 
    {
        rear->next = newNode;
    }
    rear = newNode;
    if (!front) 
    {
        front = newNode;
    }
}

int Queue::dequeue() 
{
    if (isEmpty()) 
    {
        cout << "Queue underflow!" << endl;
        return -1;
    }
    QueueNode* temp = front;
    int value = temp->data;
    front = front->next;
    if (!front) 
    {
        rear = nullptr;
    }
    delete temp;
    return value;
}

int Queue::peek() 
{
    if (isEmpty()) 
    {
        cout << "Queue is empty!" << endl;
        return -1;
    }
    return front->data;
}

bool Queue::isEmpty() 
{
    return front == nullptr;
}

void Queue::display() 
{
    QueueNode* temp = front;
    while (temp) 
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}