#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = n; j > 0; j--) {
			if(abs(j) + abs(i) <= n) cout << "*";
			else cout << " ";
		}
		for (int l = n - 1; l > 0; l--) {
			if (l > i) cout << "*";
			else cout << " ";
		}
	cout << endl;
}
	return 0;
}