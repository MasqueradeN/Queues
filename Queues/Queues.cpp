#include <iostream>
#include "Queue.hpp"

int main()
{
    const int size = 5;
    Queue<int> intQueue(size);
    for (int i = 0; i < size; i++)
    {
        intQueue.Push(10 + i);
    }

    while (intQueue.isEmpty() == false)
    {
        std::cout << " " << intQueue.Front();
        intQueue.Pop();
    }
}
