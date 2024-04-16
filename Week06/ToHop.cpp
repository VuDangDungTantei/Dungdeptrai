#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll toHop(ll k, ll n) {
    ll tu = 1, mau = 1;
    for(int i = 1; i <= k; i++) {
        mau *= i;
    }
    for(int i = n - k + 1; i <= n; i++) {
        tu *= i;
    }
    return tu/mau;
}

int kiemTra(int k, int n) {
    if(0 <= k <= n && 1 <= n <= 20) return 1;
    return 0;
}

void nhapKN(ll k[], ll n[]) {
    int i = 0;
    while(true) {
        cin >> k[i] >> n[i];
        if(k[i] == -1 && n[i] == -1) break;
        i++;
    }
    for(int j = 0; j <= i - 1; j++) {
        cout << toHop(k[j], n[j]) << endl;
    }
}

int main() {
    ll n[100005], k[100005];
    nhapKN(k, n);
    return 0;
}