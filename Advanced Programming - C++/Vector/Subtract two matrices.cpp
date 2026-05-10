/*
Mit Term 2025
Write C++ program to subtract two matrices (using vectors). Use the following example.
A = {{2, 11}, {9, 6}}                                B = {{5, 1}, {4, 7}}
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> A = {{2, 11}, {9, 6}};
    vector<vector<int>> B = {{5, 1}, {4, 7}};

    int row = A.size(), col = A[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << A[i][j] - B[i][j] << "";
        }
        cout << endl;
    }
    return 0;
}