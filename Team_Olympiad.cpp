#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> skills(n);
    vector<vector<int>> indices(3);

    for (int i = 0; i < n; ++i) {
        cin >> skills[i];
        indices[skills[i] - 1].push_back(i + 1);
    }

    int min_size = min(indices[0].size(), min(indices[1].size(), indices[2].size()));

    cout << min_size << endl;

    for (int i = 0; i < min_size; ++i) {
        cout << indices[0][i] << " " << indices[1][i] << " " << indices[2][i] << endl;
    }

    return 0;
}
/**/