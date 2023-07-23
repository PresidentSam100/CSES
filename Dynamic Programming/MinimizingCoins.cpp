// https://cses.fi/problemset/task/1634
// Minimizing Coins

#include <iostream>
#include <climits>
#define ll long long
using namespace std;

ll dp[1000001], coin[100];
ll n, x, c;

int main()
{
    cin >> n >> x;
    for (ll i = 0; i < n; i++) {
        cin >> c;
        coin[i] = c;
    }
    // Fill array with max value and set index 0 to value of 0
    fill(dp, dp + x + 1, LLONG_MAX);
    dp[0] = 0;
	// Use dynamic programming to find all possible combinations
	for (ll i = 1; i <= x; i++) {
		for (ll j = 0; j < n; j++) {
			if (coin[j] <= i) {
				ll temp = dp[i - coin[j]];
				if (temp != LLONG_MAX && dp[i] - 1 > temp) {
					dp[i] = temp + 1;
				}
			}
		}
	}
	// Possible only when the value is not LLONG_MAX
	if (dp[x] == LLONG_MAX) {
		cout << -1;
	} else {
		cout << dp[x];
	}
	return 0;
}
