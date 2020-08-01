#include<bits/stdc++.h>

using namespace std;
#define ll long long

int n, ans, a[200005];
int main() {
	scanf("%d", &n);
	for(int i=1, x=1e9; i<=n; ++i){
		scanf("%d", a+i);
		if(a[i]<x) x=a[i], ++ans;
	}
	printf("%d\n", ans);
	return 0;
}
