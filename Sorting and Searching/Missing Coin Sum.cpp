// https://cses.fi/problemset/task/2183/
// Missing Coin Sum
 
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
 
ll n, x;
ll arr[200000];

int main() {
	cin >> n;
	// Get list of all coins
	for (ll i = 0; i < n; i++) {
	    cin >> x;
	    arr[i] = x;
	}
	// Sort coins by value ascending order
	sort(arr, arr + n);
	ll max = 0;
	for (ll i = 0; i < n; i++) {
	    // If we find a coin that is greater than total + 1 then we found minimum sum we can't create
	    if (arr[i] > max + 1) {
	        break;
	    }
	    max += arr[i];
	}
	cout << (max + 1);
	return 0;
}