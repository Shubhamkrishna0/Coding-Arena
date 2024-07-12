//https://codeforces.com/problemset/problem/1985/F

#include <bits/stdc++.h>  
using namespace std; 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n,h;
		cin>>h>>n;
		vector<int>a(n),c(n);
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<n;i++)cin>>c[i];
		set<pair<long long,int>>s;
		for(int i=0;i<n;i++)s.insert({1,i});
		long long lastt=1;
		while(h>0){
			auto [turn,i]=*s.begin();
			s.erase(s.begin());
			lastt=turn;
			h-=a[i];
			s.insert({turn+c[i],i});
		}
		cout<<lastt<<endl;
	}
}