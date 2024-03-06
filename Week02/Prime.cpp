#include <iostream>

#define ll long long

using namespace std;

bool isPrime(ll n) {
	if (n < 2) return false;
	for(int i = 2; i*i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	ll n;
	cin >> n;
	cout << boolalpha << isPrime(n);
	return 0;
}