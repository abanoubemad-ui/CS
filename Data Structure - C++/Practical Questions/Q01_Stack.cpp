/*
1- Write a C++ program to implement a stack using an array with
push and pop operations. Find the top element of the stack
and check if the stack is empty or not.
*/

#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class stack
{
private:
    int top;
    int item[MAX_SIZE];

public:
    stack() { top = -1; }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int getTop()
    {
        if (isEmpty())
        {
            cout << "Stack Is Empty" << endl;
            return -1;
        }
        return item[top];
    }

    void push(int Element)
    {
        if (top >= MAX_SIZE - 1)
        {
            cout << "Stack Is Overflow" << endl;
        }
        else
        {
            top++;
            item[top] = Element;
        }
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack Is Underflow" << endl;
            return -1;
        }
        else
        {
            int Element = item[top];
            top--;
            return Element;
        }
    }

    void print()
    {
        if (isEmpty())
        {
            cout << "Stack Is Empty" << endl;
        }
        else
        {
            for (int i = top; i >= 0; i--)
            {
                cout << item[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{

    return 0;
}