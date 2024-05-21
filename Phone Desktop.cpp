#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <iomanip>
#include <cassert>
#include <sstream>
#include <numeric>
#include <cstdio>
#include <bitset>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

#define pb push_back
#define F first
#define S second
#define _sz(x) ((int)x.size())

const int N = 2e5 + 20, LG = 31;

int t;
int n;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> t;
    while(t--) {
        int x, y;
        cin >> y >> x;

        int ans = x / 2;

        x = max(0LL, x - 2LL * ans);
        y = max(0LL, y - 7LL * ans);

        if (x) {
            x = 0;
            y = max(0LL, y - 11LL);
            ans++;
        }
        ans += (y + 14) / 15;
        cout << ans << '\n';
    }

    return 0;
}
