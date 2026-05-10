/*
Final 2023
Write C++ program to multiple two matrices using vectors.
*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> matrix_1 = {{1, 2}, {3, 4}};
    vector<vector<int>> matrix_2 = {{5, 6}, {7, 8}};
    cout << "Matrix 1 : " << endl;
    for (int i =0; i < matrix_1.size(); i++)
    {
        for (int j = 0; j < matrix_1[i].size(); j++)
        {
            cout << matrix_1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "----------------\n";
    cout << "Matrix 2 ; " << endl;
    for (int i = 0; i < matrix_2.size(); i++)
    {
        for (int j = 0; j < matrix_2[i].size(); j++)
        {
            cout << matrix_2[i][j] << " ";
        }
        cout << endl;
    }
    int rows_1 = matrix_1.size();
    int cols_1 = matrix_1[0].size();
    int cols_2 = matrix_2[0].size();
    vector <vector<int>>result (rows_1, vector<int>(cols_2, 0));
    for (int i = 0; i < rows_1; i++)
    {
        for (int j = 0; j < cols_2; j++)
        {
            for (int k = 0; k < cols_1; k++)
            {
                result[i][j] += matrix_1[i][k] * matrix_2[k][j];
            }
        }
    }
    cout << "----------------\n";
    cout << "Result Matrix : " << endl;
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