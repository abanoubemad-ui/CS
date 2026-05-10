#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 20, 50, 20};
    int value_to_remove = 20;
    cout << "Before deletion : ";
    for  (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == value_to_remove)
        {
            v.erase(v.begin() + i);
            i--;
        }
    }
    cout << "After deletion : ";
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}