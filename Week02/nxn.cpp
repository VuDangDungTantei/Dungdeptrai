#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			cout << j << " ";
		}
		for (int l = 1; l <= i - 1; l++) {
			cout << l << " ";
		}
		cout << endl;
	}
	return 0;
}