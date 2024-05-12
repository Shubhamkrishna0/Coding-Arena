#include <iostream>

using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drink = k * l;
    int total_lime = c * d;
    int total_salt = p;

    int max_toasts = min(min(total_drink / nl, total_lime), total_salt / np);
    int toasts_per_friend = max_toasts / n;

    cout << toasts_per_friend << endl;

    return 0;
}
