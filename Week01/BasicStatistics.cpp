#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int m = n;
    double sum = 0;
    int max = LONG_MIN, min = LONG_MAX;
    while(n--) {
        int x;
        cin >> x;
        sum += x;
        if(x >= max) max = x;
        if(x <= min) min = x;
    }
    cout << "Mean: " << sum / m << endl
         << "Max: " << max << endl
         << "Min: " << min;
    return 0;
}