// Write a C++ program for a Circular Queue using Array.

#include <iostream>
using namespace std;

int q[5], front = -1, rear = -1;

void enqueue(int x)
{
    if ((rear + 1) % 5 == front)
    {
        cout << "Full" << endl;
        return;
    }
    if (front == -1)
    {
        front = 0;
    }
    rear = (rear + 1) % 5;
    q[rear] = x;
}

void display()
{
    int i = front;
    while (true)
    {
        cout << q[i] << " ";
        if (i == rear)
        {
            break;
        }
        i = (i + 1) % 5;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    return 0;
}