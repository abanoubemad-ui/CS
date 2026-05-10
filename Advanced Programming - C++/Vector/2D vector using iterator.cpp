#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> vect = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    // Range-based for loop
    for (vector<int> vect1D : vect)
    {
        for (int x : vect1D)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}