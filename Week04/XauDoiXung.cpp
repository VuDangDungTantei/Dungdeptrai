#include<bits/stdc++.h>

using namespace std;

int main() {
	string a;
	cin >> a;
		//string test = a;
		//reverse(test.begin(), test.end());
		//if(test == a) cout << "Yes";
		//else cout << "No";
	int len = a.length();
	for (int i = 0; i*2 < len; i++) {
		if(a[i] != a[len - i - 1]) {
			cout << "No";
			exit(0);
		}
	}
	cout << "Yes";
	return 0;
}