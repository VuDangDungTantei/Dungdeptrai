//1. Đã chạy

/*2. 
#include <iostream>

using namespace std;

int *f(int* a) {
    for(int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    return a;
}

int main() {
    int *a = new int;
    f(a);
    for(int i = 0; i < 5; i++) cout << *(a + i) << " ";
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
void f(int a[]) {
    cout << sizeof(a);
}
int main() {
    int A[10];
    cout << sizeof(A);
    f(A);
    return 0;
}
*/

/*
3.
#include <iostream>

using namespace std;

int count_even(int* a, int n) {
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(*(a + i) % 2 == 0) cnt++;
    }
    return cnt;
}

int main() {
    int *a = new int[1000000];
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> *(a + i);
    }
    cout << count_even(a, 5);
    cout << count_even(a + n - 5, 5);
    return 0;
}
*/

