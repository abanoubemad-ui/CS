#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    clock_t start = clock();
    // code here
    clock_t end = clock();
    double time_taken = double(end - start) / CLOCKS_PER_SEC * 1000;

    cout << "Time: " << time_taken << " ms" << endl;

    return 0;
}
