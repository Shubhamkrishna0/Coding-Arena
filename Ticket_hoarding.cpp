//https://codeforces.com/problemset/problem/1951/C

#include<bits/stdc++.h>
using namespace std;
long long a[300005];
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,m,k,x=0,ans=0;
		cin>>n>>m>>k;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1,a+1+n);
		for(int i=1;i<=n;i++){
			if(i*m>k){
				ans+=(k%m)*(a[i]+x);
				break;
			}
			ans+=(a[i]+x)*m;
			x+=m;
		}
		cout<<ans<<endl;
	}
}