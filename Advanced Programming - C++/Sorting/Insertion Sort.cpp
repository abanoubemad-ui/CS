#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {64, 12, 45, 8, 99, 3, 71};
    int n = v.size();

    cout << "Original : ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    for (int i = 1; i < n; i++)
    {
        int key = v[i];
        int j = i - 1;

        while (j >= 0 && v[j] > key)
        {
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = key;
    }

    cout << "Ascending : ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    for (int i = 1; i < n; i++)
    {
        int key = v[i];
        int j = i - 1;

        while (j >= 0 && v[j] < key)
        {
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = key;
    }

    cout << "Descending : ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    return 0;
}