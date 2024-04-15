#include <bits/stdc++.h>

using namespace std;

#define ll long long

void f2to10(ll n) {
    ll cnt = 0, a[1000], tmp = n;
    while(n > 0) {
        ll d = n % 2;
        n /= 2;
        a[cnt++] = d;
    }
    cout << "He nhi phan cua " << tmp << " la: ";
    for(int i = cnt - 1; i >= 0; i--) {
        cout << a[i];
    }
}

void f10to2(ll n) {
    ll cnt = 0, res = 0, tmp = n;
    while(n > 0) {
        ll d = n % 10;
        res += d*pow(2, cnt++);
        n /= 10;
    }
    cout << "He thap phan cua " << tmp << " la: " << res;
}
int main() {
    ll n; cin >> n;
    f10to2(n);

    return 0;
}