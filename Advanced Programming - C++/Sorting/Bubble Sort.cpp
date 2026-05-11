#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {64, 12, 45, 8, 99, 3, 71};
    int n = v.size();
    cout << "Original : ";
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
                flag = true;
            }
        }
        if (!flag)
        {
            break;
        }
    }
    cout << "Ascending : ";
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    // Worst Case
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] < v[j + 1])
            {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
                flag = true;
            }
        }
        if (!flag)
        {
            break;
        }
    }
    cout << "Descending : ";
    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}
