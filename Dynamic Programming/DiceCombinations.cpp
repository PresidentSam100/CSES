// https://cses.fi/problemset/task/1633
// Dice Combinations

#include <iostream>
#define ll long long
using namespace std;

ll const MOD = 1000000007;
ll const dice = 6;
ll dp[1000000 + dice];
ll n;

int main()
{
    cin >> n;
    dp[dice - 1] = 1;
    for (ll i = dice; i < dice + n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3] + dp[i - 4] + dp[i - 5] + dp[i - 6];
		dp[i] %= MOD;
    }
    cout << dp[n + dice - 1];
    return 0;
}
