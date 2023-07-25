// https://cses.fi/problemset/task/1621
// Distinct Numbers
 
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
 
ll n, x, ans;
ll arr[200000];
 
int main() {
	cin >> n;
	// Get all values and store in array
	for (ll i = 0; i < n; i++) {
	    cin >> x;
	    arr[i] = x;
	}
	// Sort array in ascending order
	sort(arr, arr + n);
	ans = 1;
	for (ll i = 1; i < n; i++) {
	    // If two adjacent values are distinct, then increment ans count
	    if (arr[i] != arr[i - 1]) {
	        ans++;
	    }
	}
	cout << ans;
	return 0;
}
