//  The program to intersect the two sets X = {1, 4, 12} and Y = {2, 11, 12} (Using bitsets)

#include <iostream>
#include <bitset>
using namespace std;

#define M 16

void printIntersection(bitset<M> bitset1, bitset<M> bitset2)
{
    for (int i = 0; i <= 12; i++)
    {
        if (bitset1[i] == 1 && bitset2[i] == 1)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int X[] = {1, 4, 12};
    int Y[] = {2, 11, 12};

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

    printIntersection(bitset1, bitset2);
}