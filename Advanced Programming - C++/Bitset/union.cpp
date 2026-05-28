// Using bitsets, write program to union the two sets X = {1, 2, 5} and Y = {5, 7}

#include <iostream>
#include <bitset>
using namespace std;

#define M 16

void printUnion(bitset<M> bitset1, bitset<M> bitset2)
{
    for (int i = 0; i < 8; i++)
    {
        if (bitset1[i] == 1 || bitset2[i] == 1)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int X[] = {1, 2, 5};
    int Y[] = {5, 7};

    int m = sizeof(X) / sizeof(X[0]);
    int n = sizeof(Y) / sizeof(Y[0]);

    bitset<M> bitset1;
    bitset<M> bitset2;

    for (int i = 0; i < m; i++)
    {
        bitset1.set(X[i]);
    }
    for (int i = 0; i < n; i++)
    {
        bitset2.set(Y[i]);
    }

    printUnion(bitset1, bitset2);
}