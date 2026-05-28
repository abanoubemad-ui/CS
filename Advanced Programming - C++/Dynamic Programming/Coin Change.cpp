#include <iostream>
#include <vector>

using namespace std;

int coin_change(const vector<int> &coins, int target)
{
    vector<int> dp(target + 1, target + 1);

    dp[0] = 0;

    for (int i = 1; i <= target; ++i)
    {
        for (int coin : coins)
        {
            if (i >= coin)
            {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }

    if (dp[target] > target)
    {
        return -1;
    }
    else
    {
        return dp[target];
    }
}

int main()
{
    vector<int> coins = {1, 2, 5};
    int target = 11;

    int result = coin_change(coins, target);
    cout << result << endl;

    return 0;
}