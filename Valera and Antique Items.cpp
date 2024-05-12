#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, v;
    cin >> n >> v;

    vector<int> sellers;

    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;

        bool can_bid = false;
        for (int j = 0; j < k; ++j) {
            int sij;
            cin >> sij;
            if (sij < v) {
                can_bid = true;
            }
        }

        if (can_bid) {
            sellers.push_back(i + 1);
        }
    }

    cout << sellers.size() << endl;
    for (int i = 0; i < sellers.size(); ++i) {
        cout << sellers[i] << " ";
    }
    cout << endl;

    return 0;
}
