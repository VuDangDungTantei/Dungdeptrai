//Cách 1:

#include <iostream>
#include <set>

using namespace std;

int main() {
    set <int> check;
    int N;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
        check.insert(a[i]);
    }
    if(check.size() < N) cout << "Yes";
    else cout << "No";
    return 0;
}

//Cách 2:

#include<bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    int check[10000] = {};
    for(int i = 0; i < N; i++) {
        check[a[i]]++;
        if(check[a[i]] == 2) {
            cout << "Yes";
            exit(0);
        }
    }
    cout << "No";
    return 0; 
}