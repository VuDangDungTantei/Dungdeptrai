#include <iostream>

using namespace std;

int main() {
	long long n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int k = 5; k > i; k--) {
			cout << " ";
		}
		for (int l = i; l > 0; l--) {
			cout << "*";
		}
		if (i > 1) {
		for (int j = 1; j < i; j++) {
			cout << "*";
		}
	}
		cout << endl;
}
	return 0;
}