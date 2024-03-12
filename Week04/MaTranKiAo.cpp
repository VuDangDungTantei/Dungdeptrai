#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, cnt = 1;
	cin >> n;
	int a[n][n] = {};
	int mid = n/2;
	int i = 0, j = mid;
	a[i][j] = cnt;
	while(cnt < n*n) {
		if(i > 0 && j + 1 < n) {
			if(a[i-1][j+1] == 0) {
				a[i-1][j+1] = ++cnt;
				i--;
				j++;
			} else {
				a[i+1][j] = ++cnt;
				i++;
			}
		}
		else if (i == 0 && j == n - 1) {
			a[i+1][j] = ++cnt;
			i++;
		}
		else if(i == 0) {
			if(a[n-1][j+1] == 0) {
				a[n-1][j+1] = ++cnt;
				i = n - 1;
				j++;
			} else {
				a[i+1][j] = ++cnt;
				i++;
			}
		}
		else if(j == n - 1) {
			if(a[i-1][0] == 0) {
				a[i-1][0] = ++cnt;
				i--;
				j = 0;
			} else {
				a[i+1][j] = ++cnt;
				i++;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}