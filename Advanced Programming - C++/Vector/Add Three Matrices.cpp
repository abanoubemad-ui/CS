/*
Final 2025
The program to add three matrices (Using vectors). Use the following three matrices.
A = { {1, 2}, {5, 9} }  ,   B = { {3, 6}, {4, 8} }  ,   C = { {15, 3}, {7, 12} }
*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> A = {{1, 2}, {5, 9}};
    vector<vector<int>> B = {{3, 6}, {4, 8}};
    vector<vector<int>> C = {{15, 3}, {7, 12}};
    vector<vector<int>> result(A.size(), vector<int>(A[0].size()));
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < A[i].size(); j++)
        {
            result[i][j] = A[i][j] + B[i][j] + C[i][j];
        }
    }
    cout << "Result : " << endl;
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}