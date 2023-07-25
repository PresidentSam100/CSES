// https://cses.fi/problemset/task/1619
// Restaurant Customers
 
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
 
ll n, a, b, ans;
pair<ll, ll> arr[400000];

int main() {
	cin >> n;
	// Get ranges
	for (ll i = 0; i < n; i++) {
	    cin >> a >> b;
	    arr[2 * i] = {a, 1};
	    arr[2 * i + 1] = {b, -1};
	}
	// Sort in ascending order
	sort(arr, arr + (2 * n));
	// Sliding Window technique
	ll temp = 0;
	for (ll i = 0; i < 2 * n; i++) {
	    temp += arr[i].second;
	    ans = max(ans, temp);
	}
	cout << ans;
	return 0;
}