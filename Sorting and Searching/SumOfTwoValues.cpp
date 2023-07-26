// https://cses.fi/problemset/task/1640
// Sum of Two Values
 
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
 
ll n, x, a;
pair<ll, ll> arr[200000];

int main() {
	cin >> n >> x;
	// Get all numbers-index pairs
	for (ll i = 0; i < n; i++) {
	    cin >> a;
	    arr[i] = {a, i + 1};
	}
	// Sort in ascending order
	sort(arr, arr + n);
	// Use two pointer strategy to find sum
	bool work = false;
	ll l = 0;
	ll r = n - 1;
	while (l < r) {
	    if (arr[l].first + arr[r].first < x) {
	        l++;
	    } else if (arr[l].first + arr[r].first > x) {
	        r--;
	    } else {
	        // Two number pair found, get their indexes
	        cout << arr[l].second << " " << arr[r].second;
	        work = true;
	        break;
	    }
	}
	// No solution
	if (!work) {
	    cout << "IMPOSSIBLE";
	}
	return 0;
}
