// https://cses.fi/problemset/task/2165
// Tower of Hanoi

#include <iostream>
#include <math.h>
#define lli long long int
using namespace std;

lli n, k;

void solve(int a, int b, int c, int n) {
	if (n == 0)
		return;
	solve(a, c, b, n - 1);
	cout << a << " " << c << endl;
	solve(b, a, c, n - 1);
}

int main()
{
    cin >> n;
    // Calculate number of moves 'k' to solve tower of Hanoi Problem
    k = pow(2, n) - 1;
    cout << k << endl;
    // Use recursive approach to find moves
    solve(1, 2, 3, n);
    return 0;
}
