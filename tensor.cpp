#include<bits/stdc++.h>

using namespace std;

using ll = long long;

void solve() {
	int n;
	cin >> n;
	vector<int> a(n + 1);
	a[n] = 1;
	int pi = n, p2 = 1e5;
	stack<int> st;
	st.push(n);
	for (int i = n - 1; i >= 1; i--) {
		cout << "? " << i << " " << pi << endl;
		string s;
		cin >> s;
		if (s == "YES") {
			a[i] = 1;
			st.push(i);
			pi = i;
		} else {
			if (p2 != 1e5) {
				cout << "? " << i << " " << p2 << endl;
				cin >> s;
			}
			if (s == "YES" || p2 == 1e5) {
				a[i] = 0;
				p2 = i;
			} else {
				a[pi] = 0;
				while (!st.empty()) {
					st.pop();
					pi = st.top();
					cout << "? " << i << " " << pi << endl;
					cin >> s;
					if (s == "YES") {
						a[i] = 1;
						st.push(i);
						pi = i;
						break;
					} else {
						a[pi] = 0;
						p2 = min(pi, p2);
					}
				}
			}
		}
	}
	cout << "! ";
	for (int i = 1; i <= n; i++) {
		cout << a[i] << " \n"[i == n];
	}
	cout.flush();

}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int _ = 1;
	cin >> _;
	
	while (_--)
	solve();

	return 0;
}