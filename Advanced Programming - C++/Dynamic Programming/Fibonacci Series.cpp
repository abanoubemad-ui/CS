#include <iostream>
using namespace std;

int fib_iterative(int x)
{
    if (x <= 1)
    {
        return x;
    }
    int n1 = 0, n2 = 1, n3;
    for (int i = 2; i <= x; i++)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
    return n3;
}

int fib_recursive(int x)
{
    if (x <= 1)
    {
        return x;
    }
    else
    {
        return fib_recursive(x - 1) + fib_recursive(x - 2);
    }
}
int main()
{
    cout << fib_iterative(40) << endl;
    cout << fib_recursive(40) << endl;
    return 0;
}