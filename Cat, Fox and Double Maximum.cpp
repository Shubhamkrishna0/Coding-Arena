 #include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n + 1), b(n + 1), ip(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            b[i] = 0;
            ip[a[i]] = i;
        }

        int d = n, dd = n / 2;
        for (int i = 1; i <= n; i++) {
            if (ip[i] % 2 == ip[n] % 2) {
                b[ip[i]] = d--;
            } else {
                b[ip[i]] = dd--;
            }
        }

        for (int i = 1; i <= n; i++) {
            cout << b[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
