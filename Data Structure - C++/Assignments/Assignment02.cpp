// Write a C++ program for a Priority Queue using Array.

#include <iostream>
using namespace std;

struct item
{
    int value;
    int priority;
};

item queue[100];
int qsize = 0;

void enqueue(int value, int priority)
{
    int i;
    for (i = qsize - 1; i >= 0; i--)
    {
        if (priority < queue[i].priority)
        {
            queue[i + 1] = queue[i];
        }
        else
        {
            break;
        }
    }
    queue[i + 1].value = value;
    queue[i + 1].priority = priority;
    qsize++;
}

void display()
{
    cout << "Priority Queue : " << endl;
    for (int i = 0; i < qsize; i++)
    {
        cout << "Value = " << queue[i].value << ", Priority = " << queue[i].priority << endl;
    }
}

int main()
{
    enqueue(15, 2);
    enqueue(10, 1);
    enqueue(30, 3);
    enqueue(20, 1);
    enqueue(25, 2);

    display();
    return 0;
}