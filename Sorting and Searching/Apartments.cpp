// https://cses.fi/problemset/task/1084
// Apartments
 
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
 
ll n, m, k, x, y, ans;
ll apartment[200000], applicant[200000];
 
int main() {
	cin >> n >> m >> k;
	// Get all apartment sizes
	for (ll i = 0; i < n; i++) {
	    cin >> apartment[i];
	}
	// Get all applicant sizes
	for (ll i = 0; i < m; i++) {
	    cin >> applicant[i];
	}
	// Sort arrays in ascending order
	sort(apartment, apartment + n);
	sort(applicant, applicant + m);
	// Check apartment-applicant pairs and update
	x = 0;
	y = 0;
	ans = 0;
	while (x < n && y < m) {
	    if (abs(apartment[x] - applicant[y]) <= k) {
	        // Apartment and applicant match
	        x++;
	        y++;
	        ans++;
	    } else if (apartment[x] - applicant[y] > k) {
	        // Current apartment size too large
	        // Get larger applicant desired size
	        y++;
	    } else {
	        // Current applicant desired size too large
	        // Get larger apartment
	        x++;
	    }
	}
	cout << ans;
	return 0;
}