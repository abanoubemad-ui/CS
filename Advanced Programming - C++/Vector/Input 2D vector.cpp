#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int row = 3, col = 4;
    vector<vector<int>> matrix;
    for (int i = 0; i < row; i ++)
    {
        vector<int> row;
        for (int j = 0; j < col; j++)
        {
            int value;
            cin >> value;
            row.push_back(value);
        }
        matrix.push_back(row);
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}