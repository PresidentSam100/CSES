// https://cses.fi/problemset/task/1660
// Subarray Sums I
 
#include <iostream>
#define ll long long
using namespace std;
 
ll n, x, a;
ll arr[200000];

int main() {
	cin >> n >> x;
	// Get all numbers for array
	for (ll i = 0; i < n; i++) {
	    cin >> a;
	    arr[i] = a;
	}
	ll left = 0;
	ll right = 0;
	ll ans = 0;
	ll curr = 0;
	while (left < n) {
	    if (curr < x && right < n) {
	        // Lower subarray sum than desired, add next right element if exists
	        curr += arr[right];
	        right++;
	    } else if (curr == x) {
	        // Subarray sum with sum x, subtract left element of subarray
	        ans++;
	        curr -= arr[left];
	        left++;
	    } else {
	        // Higher subarray sum than desired, subtract left element of subarray 
	        curr -= arr[left];
	        left++;
	    }
	}
	cout << ans;
	return 0;
}