#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    bitset<3> permissions;
    permissions.set(0);
    permissions.set(1);

    cout << "permissions : " << permissions << endl;

    if (permissions.test(0))
    {
        cout << "Can Read" << endl;
    }

    if (permissions.test(1))
    {
        cout << "Can Write" << endl;
    }

    if (!permissions.test(2))
    {
        cout << "Cannot Execute" << endl;
    }
    return 0;
}