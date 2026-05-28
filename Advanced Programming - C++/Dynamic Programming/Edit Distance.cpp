#include <iostream>
#include <string>
#include <vector>
using namespace std;

int editDistance(string str1, string str2, int I, int D, int S)
{
    int n = str1.length();
    int m = str2.length();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1));

    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = i * D;
    }
    for (int i = 0; i <= m; i++)
    {
        dp[0][i] = i * I;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = min((dp[i - 1][j] + D), min((dp[i][j - 1] + I), dp[i - 1][j - 1] + S));
            }
        }
    }
    return dp[n][m];
}

int main()
{
    int I, D, S;
    string str1, str2;
    cin >> str1 >> str2;
    cin >> I >> D >> S;
    cout << editDistance(str1, str2, I, D, S) << endl;
    return 0;
}