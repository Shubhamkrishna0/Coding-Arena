#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> k(n);
    for(int i = 0; i < n; ++i) {
        cin >> k[i];
    }
    int min_time = INT_MAX;
    for(int i = 0; i < n; ++i) {
        int time = 0;
        for(int j = 0; j < k[i]; ++j) {
            int m;
            cin >> m;
            time += m * 5 + 15;
        }
        min_time = min(min_time, time);
    }
    cout << min_time << endl;
    return 0;
}
