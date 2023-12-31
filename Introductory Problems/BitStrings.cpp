// https://cses.fi/problemset/task/1617
// Bit Strings
 
#include <iostream>
#include <math.h>
#define lli long long int
using namespace std;
 
lli n, power;
lli MOD = 1000000007;
 
int main() {
	cin >> n;
	power = 1;
	// We simply need to find (2^n) % MOD below
	for (lli i = 0; i < n; i++) {
	    power *= 2;
	    power %= MOD;
	}
	cout << power;
	return 0;
}
