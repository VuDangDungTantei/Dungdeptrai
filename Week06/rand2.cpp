#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    srand(time(NULL));
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        a[i] = rand() % 50;
    }
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                if((a[i] + a[j] + a[k]) % 25 == 0) cout << a[i] << " " << a[j] << " " << a[k] << endl;
            }
        }
    }
    return 0;
}