#include <bits/stdc++.h>
char s[400009];
int T,N,ls[400009],rs[400009],a[400009],st[4000009],ans;
int dfs(int n,int dp,int ma,int op) {
	if(n==0) return 0;
	int a=dfs(ls[n],dp+1,((op==1)?(ma+1):(ma)),(op==1)?1:(-1)),
	b=dfs(rs[n],dp+1,((op==0)?(ma+1):(ma)),(op==0)?0:(-1));
	ans=std::max(ans,a+b+dp-ma);
	return std::max(a+1,b+1);
}
signed main(void) {
	//freopen("m.in","r",stdin);
	scanf("%d",&T);
	while(T--) {
		scanf("%d",&N);
		int tp=0;
		for(int i=1;i<=N;i++) scanf("%d",&a[i]),ls[i]=rs[i]=0;
		scanf("%s",s+1);
		for(int i=1;i<=N;i++) {
			int k=tp;
			while(k&&a[st[k]]<a[i]) k--;
			if(k) rs[st[k]]=i;
			if(k<tp) ls[i]=st[k+1];
			st[++k]=i;tp=k;
		}
		ans=0;
		int a=dfs(ls[st[1]],2,0,1),b=dfs(rs[st[1]],2,0,0);
		ans=std::max(ans,a+b+1);
		printf("%d\n",ans-1);
	}
}