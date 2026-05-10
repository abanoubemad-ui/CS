#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {7, 14, 3, 22, 9, 5, 18, 4};
    int target, index = -1;
    bool found = false;
    cout << "Enter the element you want want to search for : ";
    cin >> target;
    // Linear Search
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == target)
        {
            found = true;
            index = i;
            break;
        }
    }
    if (found)
    {
        cout << "Element " << target << " found at index : " << index << endl;
    }
    else
    {
        cout << "Element " << target << " not found" << endl;
    }
    return 0;
}