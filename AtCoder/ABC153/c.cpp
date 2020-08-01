#include<bits/stdc++.h>

using namespace std;
#define ll long long

const int N = 200000;
ll ans;
ll h[N];

int main() {
  int n,k;
  scanf("%d", &n);
  scanf("%d", &k);
  for(int i=0; i<n; ++i){
    scanf("%lld", h + i);
  }

  sort(h, h + n);
  ll ans = 0;
  for(int i = 0; i < n - k; ++i){
    ans += h[i];
  }

  printf("%lld\n", ans);

	return 0;
}
