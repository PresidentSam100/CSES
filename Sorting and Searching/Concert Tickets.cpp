// https://cses.fi/problemset/task/1091
// Concert Tickets
 
#include <iostream>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;
 
ll n, m, h, t;
multiset<ll> arr;

int main() {
	cin >> n >> m;
	// Get all ticket prices
	for (ll i = 0; i < n; i++) {
	    cin >> h;
	    arr.insert(h);
	}
	for (ll i = 0; i < m; i++) {
	    cin >> t;
	    // Use upper bound to find nearest price not exceeding max price
	    auto x = arr.upper_bound(t);
	    if (x == arr.begin())
	        cout << -1 << endl;
	    else {
	        // Remove sold ticket
	        cout << *(--x) << endl;
	        arr.erase(x);
	    }
	}
	return 0;
}
