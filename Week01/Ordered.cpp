#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    bool b;
    b = ((x > y && y > z) || (x < y && y < z) ? true : false);
    cout << boolalpha << b;
    return 0;
}