#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    for(int i = 0; i < n; i++)
        cin >> x[i];
    int g = x[0];
    for(int i = 1; i < n; i++)
        g = gcd(g, x[i]);
    cout << g * n << endl;
    return 0;
}
