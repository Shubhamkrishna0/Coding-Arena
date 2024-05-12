#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    // Case 1: Buy individual tickets for each ride
    int case1_cost = n * a;

    // Case 2: Buy special tickets
    int case2_cost = (n / m) * b + min((n % m) * a, b);

    // Output the minimum cost
    cout << min(case1_cost, case2_cost) << endl;

    return 0;
}
