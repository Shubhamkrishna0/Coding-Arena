#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<m; i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int v = max(2*a[0], a[n-1]);
    if(v < b[0]) cout << v << endl;
    else cout << -1 << endl;
    return 0;
}
//do