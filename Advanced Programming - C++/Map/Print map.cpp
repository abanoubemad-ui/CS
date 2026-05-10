// Practical Question
//  Using maps, write C++ program to print the following:

//     Key                  Value
//     One                 1
//     Two                 2
//     Three              3

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> Map;
    Map[1] = "One";
    Map[2] = "Two";
    Map[3] = "Three";
    map<int, string>::iterator it = Map.begin(); // or auto it = Map.begin();
    cout << "Key\t\tValue" << endl;
    while (it != Map.end())
    {
        cout << it->second << "\t\t" << it->first << endl;
        it++;
    }

    return 0;
}
