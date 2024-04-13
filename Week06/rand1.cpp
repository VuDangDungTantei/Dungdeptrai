#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int n; cin >> n;
    srand(time(NULL));
    cout << rand() % n - 1;
    return 0;
}