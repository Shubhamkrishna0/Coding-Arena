#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int i,j,k,n,m,t,T,lx,ly,li,t1,t2;
ll res[200005],tot;
set<tuple<int,int,int> > s;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin>>t;
	while(t--){
		cin>>n>>m>>T;
		s={{m+1,-n,-1}};
		tot=0;
		for(i=1;i<=T;i++){
			cin>>j>>k; res[i]=0; s.insert({k,-j,i});
		}
		lx=1; ly=li=t1=t2=0;
		for(auto [x,y,id]:s){
			y=-y;
			res[li]+=1ll*(x-t1)*(ly-t2); t2=max(t2,min(y,ly)); t1=x;
			if(y<=ly)continue;
			li=id; tot+=1ll*(x-lx)*(n-ly);
			lx=x; ly=y;
		}
		cout<<tot<<'\n'; for(i=1;i<=T;i++)cout<<res[i]<<' '; cout<<'\n';
	}
}