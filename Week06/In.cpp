#include <bits/stdc++.h>

using namespace std;

#define ll long long

//Hàm in ra 1 hàng nó M dấu " " và sau đó là N dấu "*".
void print(int M, int N) {
    for(int i = 0; i < M; i++) {
        cout << " ";
    }
    for(int i = 0; i < N; i++) {
        cout << "*";
    }
}

int main() {
    int n; cin >> n;
//In theo yêu cầu đề bài.    
    for(int i = n - 1; i >= 0; i--) {
        print(i, 2*n - 1 - 2*i);
        cout << endl;
    }
    return 0;
}