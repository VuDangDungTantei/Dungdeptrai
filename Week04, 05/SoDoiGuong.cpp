#include<bits/stdc++.h>

using namespace std;

#define ll long long

bool Check(ll n) {
	string s = to_string(n);
	string s1 = s;
	reverse(s1.begin(), s1.end());
	return (s1 == s);
}

int main() {
	int n;
	cin >> n;
	while(n--) {
		ll A, B, cnt = 0;
		cin >> A >> B;
		for(int i = A; i <= B; i++) {
			if(Check(i)) ++cnt; 
		}
		cout << cnt << endl;
	}
	return 0;
}