#include <bits/stdc++.h>

using namespace std;

long long sumplus (vector <int> a, int s) {
    long long sum = 0;
    for (int i = 0; i < a.size(); i++) {
        s -= a[i];
        sum += a[i] * s;
    }
    return sum;
}

int main() {
    vector <int> sres;
    string s;
    long long cnt1 = 0, cnt2 = 0, sum = 0;
    cin >> s;
    long long slen = s.length();
    long long res = slen * (slen - 1) / 2;
        for (int i = 1; i < slen; i++) {
            if (s[i] != s[i + 1] && s[i + 1] == s[i - 1] && i + 1 < slen) {
                ++cnt1;
            }
            if (s[i] == s[i - 1]) {
                ++cnt2;
            }
            if (s[i] != s[i - 1]) {
                res = res - cnt2 * (slen - 1 - cnt2) - (cnt2 * (cnt2 + 1) / 2);
                    if (cnt2 != 0) {
                        res += 1;
                        sres.push_back(cnt2);
                        sum += cnt2;
                    }
                cnt2 = 0;
            }
            if (i == slen - 1 && cnt2 != 0) {
                sres.push_back(cnt2);
                res = res - cnt2 * (slen - 1 - cnt2) - (cnt2 * (cnt2 + 1) / 2);
                res += 1;
                sum += cnt2;
            }
        }
    cout << res - cnt1 + sumplus(sres, sum);
    return 0;
}