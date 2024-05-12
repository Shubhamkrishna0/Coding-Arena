#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> moments(n);
    for(int i = 0; i < n; i++) {
        cin >> moments[i].first >> moments[i].second;
    }

    int total_time = 0, current_time = 1;
    for(auto &moment : moments) {
        int start = moment.first, end = moment.second;
        while(current_time + x <= start) {
            current_time += x;
        }
        total_time += end - current_time + 1;
        current_time = end + 1;
    }

    cout << total_time << "\n";

    return 0;
}
