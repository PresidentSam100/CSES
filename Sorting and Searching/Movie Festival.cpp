// https://cses.fi/problemset/task/1629
// Movie Festival
 
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
 
ll n, a, b, ans;
pair<ll, ll> arr[200000];

int main() {
	cin >> n;
	// Get movie start and end times
	for (ll i = 0; i < n; i++) {
	    cin >> a >> b;
	    arr[i] = {b, a};
	}
	// Sort in ascending order
	sort(arr, arr + n);
	// Sliding Window technique
	ll last = 0;
	for (ll i = 0; i < n; i++) {
	    // Look at start time and check that it's later than last end time
	    if (arr[i].second >= last) {
	        ans++;
	        last = arr[i].first;
	    }
	}
	cout << ans;
	return 0;
}
