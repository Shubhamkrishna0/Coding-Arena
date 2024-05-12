#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int max_joy = -1;

    for (int i = 0; i < n; ++i) {
        int fi, ti;
        cin >> fi >> ti;

        if (ti > k) {
            max_joy = max(max_joy, fi - (ti - k));
        } else {
            max_joy = max(max_joy, fi);
        }
    }

    cout << max_joy << endl;

    return 0;
}
