#include <iostream>
using namespace std;
 
long n;
 
int main() {
	cin >> n;
	cout << n << " ";
	while (n != 1) {
		if (n % 2 == 1)
			n = (n * 3) + 1;
		else
			n >>= 1;
		cout << n << " ";
	}
	return 0;
}
