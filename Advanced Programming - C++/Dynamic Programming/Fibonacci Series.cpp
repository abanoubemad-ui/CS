#include <iostream>
#include <vector>
using namespace std;

int fib_iterative(int n)
{
    if (n <= 1)
    {
        return n;
    }
    vector<int> a(n + 1);
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    return a[n];
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
