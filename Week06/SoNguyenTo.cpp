#include <bits/stdc++.h>

using namespace std;

//Kiểm tra số nguyên tố.
bool prime(int n) {
	if(n < 2) return false;
	for(int i = 2; i*i <= n; i++) {
		if(n % i == 0) return false;
	}
	return true;
}

int main() {
	int N; cin >> N;
//In tất cả số nguyên tố nhỏ hơn N
	for(int i = 2; i < N; i++) {
		if(prime(i)) cout << i << " ";
	}
	return 0;
}