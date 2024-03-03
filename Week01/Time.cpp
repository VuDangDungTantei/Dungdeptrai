#include <bits/stdc++.h>

using namespace std;

int main() {
    for (int i = 1; i <= 22; i++) {
        if (i == 1) cout << "12 midnight" << endl;
        if (i <= 11) cout << i << "am" << endl;
        if (i == 11) cout << "12 noon" << endl;
        if (11 < i && i <= 22) cout << i - 11 << "pm" << endl; 
    }
    return 0;
}