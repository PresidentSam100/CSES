// https://cses.fi/problemset/task/2205/
// Gray Code

#include <iostream>
#include <math.h>
#include <bitset>
#include <iomanip>
#define lli long long int
using namespace std;

lli n, a, p;

int main()
{
    cin >> n;
    p = pow(2, n);
    a = 0;
    cout << setw(n) << setfill('0') << a << endl;
    for (lli i = 1; i < p; i++) {
        lli two = i;
        lli k = 1;
        // Observation: We can determine which bit to toggle by determining how many times 'i' can be divided by 2
        // In other words find the highest k such that i&(2^x) == 0 and toggle kth bit
        while (two % 2 == 0) {
            k++;
            two >>= 1;
        }
        // Toggle the kth bit of 'a' from the right (treat as binary value)
        a = (a ^ (1 << (k - 1)));
        // Convert from decimal to binary
        string bin = std::bitset<16>(a).to_string();
        cout << bin.substr(16 - n, n)<< endl;
    }
    return 0;
}
