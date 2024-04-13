#include <bits/stdc++.h>

using namespace std;

#define ll long long
//Làm tròn
int rnd(double n) {
    /*
    if(ceil(n) - n <= 0.5) return ceil(n);
    if(n - floor(n) < 0.5) return floor(n);
    return n;
    */

    if(n - (int)n < 0.5) return (int)n;
    else return (int)n + 1;
}

int main() {
    double n; cin >> n;
    cout << rnd(n);
    return 0;
}