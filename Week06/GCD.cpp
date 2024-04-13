#include <bits/stdc++.h>

using namespace std;

#define ll long long

//Hàm tìm UCNN của a và b.
int GCD(int a, int b) {
    if(b == 0) return a;
    int r = a % b;
    a = b;
    b = r;
    return GCD(a, b);
}

int main() {
    int a, b;
    cin >> a >> b;
//Kiểm tra a và b có nguyên tố cùng nhau hay không. 
    cout << boolalpha << (GCD(a, b) == 1);
    return 0;
}