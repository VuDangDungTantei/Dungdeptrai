#include <bits/stdc++.h>

using namespace std;

int main() {
    int year;
    cin >> year;
    cout << boolalpha << (year % 4 == 0 && year % 100 != 0);
    return 0;
}