#include<bits/stdc++.h>

using namespace std;
#define ll long long

int n, f[10][10];
ll ans;
int main() {
	scanf("%d", &n);
	for(int i=1; i<=n; ++i){
		int x=i;
		while(x>=10) x/=10;
		++f[x][i%10];
	}
	for(int i=1; i<=n; ++i){
		int x=i;
		while(x>=10) x/=10;
		ans+=f[i%10][x];
	}
	printf("%lld\n", ans);
	return 0;
}
