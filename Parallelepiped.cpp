#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int x = sqrt(a*b/c);
    int y = sqrt(a*c/b);
    int z = sqrt(b*c/a);
    int sum_of_edges = 4 * (x + y + z);
    cout << sum_of_edges << endl;
    return 0;
}
