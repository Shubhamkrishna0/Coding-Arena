#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int tc = 0; tc < t; tc++) {
        int n, k;
        cin >> n >> k;

        vector<int> cards(n);
        unordered_map<int, int> ct;
        int ans = n; 

        for (int i = 0; i < n; i++) {
            cin >> cards[i];
            if (ct.find(cards[i]) != ct.end()) {
                ct[cards[i]]++;
            } else {
                ct[cards[i]] = 1;
            }
            if (ct[cards[i]] >= k) {
                ans = k - 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
