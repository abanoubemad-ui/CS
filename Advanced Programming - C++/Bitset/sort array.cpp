// The function sort that sorts one-dim array using bitset. Use A = [3, 1, 2, 5, 4]

#include <iostream>
#include <vector>
#include <bitset>
using namespace std;
#define M 8
void bitsetSort(bitset<M> nums)
{
    for (int i = 0; i <= 5; i++)
    {
        if (nums.test(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int arr[] = {3, 1, 2, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    bitset<M> nums;
    for (int i = 0; i < n; i++)
    {
        nums.set(arr[i]);
    }
    bitsetSort(nums);

    return 0;
}