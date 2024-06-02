#include<bits/stdc++.h>
using namespace std;
int a[222222];
int main(){
	int _;
	cin>>_;
	while(_--){
		int n,f{0};
		cin>>n;
		for(int i=1; i<=n&&cin>>a[i]; i++) {
			if(a[i]<a[i-1]) f++;
		}
		if(a[n]>a[1]) f++;
		if(f>1) cout<<"NO\n";
		else cout<<"YES\n";
	}
}