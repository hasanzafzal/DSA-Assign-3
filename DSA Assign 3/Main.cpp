#include "stack.h"
#include "queue.h"
#include <iostream>
using namespace std;

int main() 
{
    Stack stack;
    Queue queue;
    cout << "Stack operations:" << endl;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.display();
    cout << "Popped: " << stack.pop() << endl;
    stack.display();
    cout << "\nQueue operations:" << endl;
    queue.enqueue(100);
    queue.enqueue(200);
    queue.enqueue(300);
    queue.display();
    cout << "Dequeued: " << queue.dequeue() << endl;
    queue.display();

    return 0;
}