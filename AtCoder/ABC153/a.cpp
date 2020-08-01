#include<bits/stdc++.h>

using namespace std;
#define ll long long

int h,a;
ll ans;
int main() {
  scanf("%d", &h);
  scanf("%d", &a);

  ans = (h + a - 1) / a;
	printf("%lld\n", ans);
	return 0;
}
