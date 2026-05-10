#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter Number Of Row : ";
    cin >> row;
    cout << "Enter Number Of Col : " ;
    cin >> col;

    vector<vector<int>> matrix(row, (vector<int>(col, 0)));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matrix[i][j] = i * col + j +1;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}