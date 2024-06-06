#include<bits/stdc++.h>
using namespace std;

int a[100005];
void work() {
	int n,s=0;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	int ans=0;
	for(int i=1;i<=n-1;i++) ans=max(ans,min(a[i],a[i+1]));
	for(int i=1;i<=n-2;i++) ans=max(ans,min(a[i],a[i+2]));
	cout<<ans<<"\n";
}
int main() {
	int t;
	cin>>t;
	while(t--) work();
}