//https://codeforces.com/problemset/problem/1973/E

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        int f = 2e5, l = -2e5;
        for (int i = 1; i <= n; i++) {
            if (a[i] != i) {
                f = i;
                break;
            }
        }

        for (int i = n; i >= 1; i--) {
            if (a[i] != i) {
                l = i;
                break;
            }
        }

        long long o = 0;
        for (int i = 1; i <= 2 * n; i++) {
            if (i > f + n) continue;
            int R = max(i + 1, 1 + l);
            o += max(0, n * 2 - R + 1);
        }

        set<int> s;
        for (int i = 1; i <= n; i++) {
            if (a[i] != i) {
                s.insert(a[i] + a[a[i]]);
            }
        }

        if (s.size() == 0) {
            o += 2 * n;
        } else if (s.size() == 1) {
            o += 1;
        }

        cout << o << '\n';
    }
    return 0;
}
