#include <bits/stdc++.h> 

using namespace std;

#define ll long long

int main() {
	ll n;
	cin >> n;
	ll a[n], b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
	}
	ll amin = *min_element(a, a+n);
	ll bmin = *min_element(b, b+n);
	cout << amin*bmin;
	return 0;
}