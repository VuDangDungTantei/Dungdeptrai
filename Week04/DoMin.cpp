#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n, m;
	cin >> n >> m;
	char map[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if(map[i][j] == '.') {
				map[i][j] = '0';
				if(i == 0 && j == 0) {
					if(map[i+1][j] == '*') map[i][j]++;
					if(map[i][j+1] == '*') map[i][j]++;
					if(map[i+1][j+1] == '*') map[i][j]++;	
				}
				else if(i == 0 && j == m - 1) {
					if(map[i+1][j] == '*') map[i][j]++;
					if(map[i][j-1] == '*') map[i][j]++;
					if(map[i+1][j-1] == '*') map[i][j]++;	
				}
				else if(i == n - 1 && j == 0) {
					if(map[i-1][j] == '*') map[i][j]++;
					if(map[i][j+1] == '*') map[i][j]++;
					if(map[i-1][j+1] == '*') map[i][j]++;	
				}
				else if(i == n - 1 && j == m - 1) {
					if(map[i-1][j] == '*') map[i][j]++;
					if(map[i][j-1] == '*') map[i][j]++;
					if(map[i-1][j-1] == '*') map[i][j]++;	
				}
				else if(i == 0) {
					if(map[i][j+1] == '*') map[i][j]++;
					if(map[i][j-1] == '*') map[i][j]++;
					if(map[i+1][j] == '*') map[i][j]++;
					if(map[i+1][j+1] == '*') map[i][j]++;
					if(map[i+1][j-1] == '*') map[i][j]++;
				}
				else if(j == 0) {
					if(map[i+1][j] == '*') map[i][j]++;
					if(map[i-1][j] == '*') map[i][j]++;
					if(map[i+1][j+1] == '*') map[i][j]++;
					if(map[i][j+1] == '*') map[i][j]++;
					if(map[i-1][j+1] == '*') map[i][j]++;
				}
				else if(i == n - 1) {
					if(map[i][j+1] == '*') map[i][j]++;
					if(map[i][j-1] == '*') map[i][j]++;
					if(map[i-1][j] == '*') map[i][j]++;
					if(map[i-1][j+1] == '*') map[i][j]++;
					if(map[i-1][j-1] == '*') map[i][j]++;
				}
				else if(j == m - 1) {
					if(map[i+1][j] == '*') map[i][j]++;
					if(map[i-1][j] == '*') map[i][j]++;
					if(map[i+1][j-1] == '*') map[i][j]++;
					if(map[i][j-1] == '*') map[i][j]++;
					if(map[i-1][j-1] == '*') map[i][j]++;
				}
				else {
					if(map[i+1][j] == '*') map[i][j]++;
					if(map[i-1][j] == '*') map[i][j]++;
					if(map[i][j-1] == '*') map[i][j]++;
					if(map[i][j+1] == '*') map[i][j]++;
					if(map[i+1][j-1] == '*') map[i][j]++;
					if(map[i-1][j+1] == '*') map[i][j]++;
					if(map[i-1][j-1] == '*') map[i][j]++;
					if(map[i+1][j+1] == '*') map[i][j]++;
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << map[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}