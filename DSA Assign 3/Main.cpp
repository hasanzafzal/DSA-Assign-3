#include "stack.h"
#include "queue.h"
#include <iostream>
using namespace std;

int main()
{
    Stack stack;
    Queue queue;
    cout << "Stack operations:" << endl;
    stack.iAs(10);
    stack.iAs(20);
    stack.iAs(30);
    stack.display();
    cout << "Deletion at start: " << stack.dAs() << endl;
    stack.display();
    cout << "\nQueue operations:" << endl;
    queue.iAe(100);
    queue.iAe(200);
    queue.iAe(300);
    queue.display();
    cout << "Deletion at end: " << queue.dAe() << endl;
    queue.display();
    return 0;
}
