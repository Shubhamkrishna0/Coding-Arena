//https://codeforces.com/problemset/problem/1989/F
#include<cstdio>
#include<vector>
#include<cstring>
#include<iostream>
#include<algorithm>
#define fi first
#define se second
using namespace std;
typedef long long LL;
typedef pair<int,int> PII;
const int N=4e5+9;
int n,m,Q;
struct Edge{
	int u,v,id;
};
vector<int> g[N];
int dfn[N],low[N],timestamp;
int stk[N],top; bool in_stk[N];
int id[N],scc_cnt;
vector<int> ans[N];
int p[N],sz[N];
void tarjan(int u){
	dfn[u]=low[u]=++timestamp;
	stk[++top]=u; in_stk[u]=1;
	for(int &v:g[u]){
		if(!dfn[v]) tarjan(v),low[u]=min(low[u],low[v]);
		else if(in_stk[v]) low[u]=min(low[u],dfn[v]);
	}
	if(dfn[u]==low[u]){
		scc_cnt++;
		int y;
		do{
			y=stk[top--]; in_stk[y]=0;
			id[y]=scc_cnt;
		}while(y!=u);
	}
}
void solve(int l,int r,vector<Edge> q){
	for(Edge &P:q) dfn[P.u]=dfn[P.v]=0,g[P.u].clear(),g[P.v].clear(); timestamp=0;
	scc_cnt=0;
	int mid=l+r>>1;
	for(Edge &P:q) if(P.id<=mid) g[P.u].push_back(P.v);
	for(Edge &P:q){
		if(!dfn[P.u]) tarjan(P.u);
		if(!dfn[P.v]) tarjan(P.v);
	}
	if(l==r){
		for(Edge &P:q) if(id[P.u]==id[P.v]) ans[l].push_back(P.id);
		return;
	}
	vector<Edge> L,R;
	for(Edge &P:q){
		if(id[P.u]==id[P.v]){
			if(P.id<=mid) L.push_back(P);
		} else R.push_back({id[P.u],id[P.v],P.id});
	}
	solve(l,mid,L),solve(mid+1,r,R);
}
int find(int x){
	return p[x]^x?p[x]=find(p[x]):x;
}
LL get(int x){
	return x>1?(LL)x*x:0;
}
int main(){
	scanf("%d%d%d",&n,&m,&Q);
	vector<Edge> q;
	for(int i=0;i<Q;i++){
		int x,y; char c[2];
		scanf("%d%d%s",&x,&y,c);
		if(*c=='R') q.push_back({y+n,x,i});
		else q.push_back({x,y+n,i});
	}
	solve(0,Q-1,q);
	LL res=0;
	for(int i=1;i<=n+m;i++) p[i]=i,sz[i]=1;
	for(int i=0;i<Q;i++){
		for(int x:ans[i]){
//			printf("%d %d\n",i,x);
			int u=find(q[x].u),v=find(q[x].v);
			if(u^v){
				res-=get(sz[u])+get(sz[v]);
				p[u]=v; sz[v]+=sz[u];
				res+=get(sz[v]);
			}
		}
		printf("%lld\n",res);
	}
	return 0;
}