#include <bits/stdc++.h>
using namespace std;
long long t, n, a[200009], i, q;
map<int, int> cnt;
int main() {
	cin >> t;
	while(t--){
		cin >> n;
		for(i = 1; i <= n; i++){
			cin >> a[i];
			cnt[a[i]]++;
		}for(i = 1; i <= n; i++){
			q = (a[i] / 4) * 4;
			while(cnt[q] == 0) q++;
			cout << q << " ";
			cnt[q]--;
		}cout << "\n";
	}
	return 0;
}