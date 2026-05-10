#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    cout << "Original : ";
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    int n = v.size();
    for (int i = 0; i < n / 2; i++)
    {
        int temp = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i] = temp;
    }
    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}