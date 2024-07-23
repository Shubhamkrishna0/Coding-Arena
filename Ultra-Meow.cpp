#include<bits/stdc++.h>
#define mod 1000000007LL
using namespace std;
int n,t;
long long C[5001][5001],r;
int main(){
	ios::sync_with_stdio(false),cin.tie(0);
	for(int i=0;i<=5000;i++){
		C[i][0]=1LL;
		C[i][i]=1LL;
	}
	for(int i=0;i<=5000;i++){
		for(int j=1;j<=i-1;j++){
			C[i][j]=(C[i-1][j-1]+C[i-1][j])%mod;
		}
	}
	for(cin>>t;t;t--){
		cin>>n;
		r=0;
		for(int i=0;i<=n;i++){
			for(int j=0;j<=i;j++){
				r=(r+C[min(n,i+j)][j]*C[max(n-i-j-1,0)][i-j]%mod*(i+1LL+j)%mod)%mod;
			}
		}
		cout<<r<<'\n';
	}
	return 0;
}
