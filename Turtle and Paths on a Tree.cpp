#include <bits/stdc++.h>
using namespace std;

int n, a[25005], dp[25005][4002];
int son[25002][2];

void dfs(int x){
	if(!x) return ;
	dfs(son[x][0]); dfs(son[x][1]);
	
	int minnx = (son[x][0] != 0 ? 1e9 : 0);
	int minny = (son[x][1] != 0 ? 1e9 : 0);
	int minn = 1e9;
	for(int i = 1; i<= 4000; i++){
		if(i != a[x]){
			minnx = min(minnx, dp[son[x][0]][i] + i);
			minny = min(minny, dp[son[x][1]][i] + i);
			minn = min(minn, dp[son[x][0]][i] + dp[son[x][1]][i] + i);
		}
	}
	if(x == 1){
		cout << min(minnx + minny, minn) << endl;
		return ;
	}
	for(int i = 1; i <= 4000; i++){
		dp[x][i] = min({minnx + minny, minnx + dp[son[x][1]][i], minny + dp[son[x][0]][i], minn});
	}
	if(a[x] <= 4000) dp[x][a[x]] = 1e9;
}
void solve(){
	cin >> n;
	for(int i = 1; i <= n; i++) son[i][1] = son[i][0] = 0;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 2; i <= n; i++) {
		int FA;
		cin >> FA;
		if(son[FA][0]) son[FA][1] = i;
		else son[FA][0] = i;
	}
	for(int i = 0; i <= 4000; i++) dp[0][i] = 1e9;
	dfs(1);
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t;
	cin>> t;
	while(t--) solve();
	return 0;
}