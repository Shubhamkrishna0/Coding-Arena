#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int cases;
    cin >> cases;

    for (int c = 0; c < cases; ++c) {
        int n;
        cin >> n;
        string a;
        cin >> a;

        vector<int> suf_cnt(n + 1, 0);
        for (int i = n - 1; i >= 0; --i) {
            suf_cnt[i] = suf_cnt[i + 1] + (a[i] == '1' ? 1 : 0);
        }
        int pref_cnt = 0;

        int opt_ans = -1;
        int opt_dist = n * 2;
        int threshold = (n + 1) / 2;

        for (int i = 0; i <= n; ++i) {
            if (pref_cnt >= (i + 1) / 2 && suf_cnt[i] >= (n - i + 1) / 2 && abs(n - 2 * i) < opt_dist) {
                opt_dist = abs(n - 2 * i);
                opt_ans = i;
            }
            if (i != n) {
                pref_cnt += (a[i] == '0' ? 1 : 0);
            }
        }
        cout << opt_ans << endl;
    }
    return 0;
}
