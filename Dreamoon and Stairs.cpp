#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int min_moves = (n + 1) / 2; // minimal moves to reach the top
    int val = (min_moves + m - 1) / m * m; // minimal moves that is a multiple of m
    if(val > n) cout << -1 << endl; // if it's impossible to satisfy the condition
    else cout << val << endl;
    return 0;
}
