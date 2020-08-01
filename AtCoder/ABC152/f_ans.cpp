#include<bits/stdc++.h>

using namespace std;
#define ll long long

const int N = 55;
int n, m, fa[N], dep[N];
ll ans, s[22];
vector<int> e[N];
void dfs(int u){
	for(int v:e[u]) if(v!=fa[u]) fa[v]=u, dep[v]=dep[u]+1, dfs(v);
}
int main() {
	scanf("%d", &n);
	for(int i=1, x, y; i<n; ++i)
		scanf("%d%d", &x, &y), e[x].push_back(y), e[y].push_back(x);
	dfs(1);
	scanf("%d", &m);
	for(int i=0, x, y; i<m; ++i){
		scanf("%d%d", &x, &y);
		if(dep[x]<dep[y]) swap(x, y);
		while(dep[x]>dep[y]) s[i]|=1ll<<x>>1, x=fa[x];
		while(x!=y) s[i]|=(1ll<<x>>1)|(1ll<<y>>1), x=fa[x], y=fa[y];
	}
	for(int i=0; i<1<<m; ++i){
		int cnt=0, cnt2=0;
		ll ss=0;
		for(int j=0; j<m; ++j) if(i>>j&1) ++cnt, ss|=s[j];
		for(int j=0; j<n; ++j) if(ss>>j&1) ++cnt2;
		ans+=(cnt&1?-1:1)*(1ll<<(n-1-cnt2));
	}
	printf("%lld\n", ans);
	return 0;
}
