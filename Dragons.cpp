#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Dragon {
    int strength;
    int bonus;
};

bool sortByStrength(const Dragon &a, const Dragon &b) {
    return a.strength < b.strength;
}

int main() {
    int s, n;
    cin >> s >> n;

    vector<Dragon> dragons(n);
    for (int i = 0; i < n; ++i) {
        cin >> dragons[i].strength >> dragons[i].bonus;
    }

    sort(dragons.begin(), dragons.end(), sortByStrength);

    for (int i = 0; i < n; ++i) {
        if (s <= dragons[i].strength) {
            cout << "NO\n";
            return 0;
        }
        s += dragons[i].bonus;
    }

    cout << "YES\n";
    return 0;
}
