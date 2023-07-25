// https://cses.fi/problemset/task/1643
// Maximum Subarray Sum
 
#include <iostream>
#include <climits>
#define ll long long
using namespace std;
 
ll n, x;
ll arr[200000];

int main() {
	cin >> n;
	// Get entire array of numbers
	for (ll i = 0; i < n; i++) {
	    cin >> x;
	    arr[i] = x;
	}
	ll currMax = 0;
	ll max = LLONG_MIN;
	// Kadane's Algorithm
	for (ll i = 0; i < n; i++) {
	    currMax += arr[i];
	    if (currMax > max) {
	        max = currMax;
	    }
	    if (currMax < 0) {
	        currMax = 0;
	    }
	}
	cout << max;
	return 0;
}