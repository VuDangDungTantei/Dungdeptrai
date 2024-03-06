#include <iostream>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	for (int i = 5; i >= 0; i--) {
		for (int k = 5; k > i; k--) {
			cout << " ";
		}
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}