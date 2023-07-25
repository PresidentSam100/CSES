// https://cses.fi/problemset/task/1090
// Ferris Wheel
 
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
 
ll n, x, a, b, temp, ans;
ll arr[200000];

int main() {
	cin >> n >> x;
	// Get all children weights
	for (ll i = 0; i < n; i++) {
	    cin >> arr[i];
	}
	// Sort array in ascending order
	sort(arr, arr + n);
	// Start from lowest and highest weights and work towards middle
	a = 0;
	b = n - 1;
	ans = 0;
	temp = x;
	while (a <= b) {
	    if (temp - arr[b] >= 0) {
	        // Put current heaviest child in current gondola
	        temp -= arr[b];
	        b--;
	    } 
	    if (temp - arr[a] >= 0) {
	        // Put current lightest child in current gondola
	        temp -= arr[a];
	        a++;
	    }
	    // Next gondola
        temp = x;
        ans++;
	}
	cout << ans;
	return 0;
}