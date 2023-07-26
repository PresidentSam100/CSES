// https://cses.fi/problemset/task/2216
// Collecting Numbers
 
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
 
ll n, x;
pair<ll, ll> arr[200000];

int main() {
	cin >> n;
	// Get all numbers for array
	for (ll i = 0; i < n; i++) {
	    cin >> x;
	    arr[i] = {x, i};
	}
	// Sort in ascending order
	sort(arr, arr + n);
	ll ans = 1;
	ll temp = arr[0].second;
	for (ll i = 1; i < n; i++) {
	    // Check if their expected locations are in order
	    if (arr[i].second < temp) {
	        ans++;
	    }
	    temp = arr[i].second;
	}
	cout << ans;
	return 0;
}
