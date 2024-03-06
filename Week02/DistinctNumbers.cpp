#include <iostream>

using namespace std;

int main() {
	int n, m = -1;
	while(true) {
		cin >> n;
		if (n < 0) {
			cout << n;
			exit(0);
		} 
		if (m == n) {
			continue;
		} else {
			cout << n << " ";
			m = n;
		}
	}
	return 0;
}