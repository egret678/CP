#include<bits/stdc++.h>

using namespace std;
#define ll long long

const int N = 10005;
int h,n,sum;
ll ans;

int main() {
  scanf("%d", &h);
  scanf("%d", &n);
  int a[n];
  sum = 0;
  for(int i = 0; i < n; ++i){
    scanf("%d", a + i);
    sum += a[i];
  }

  sum >= h ? printf("Yes\n"):printf("No\n");

  if(sum >= h) printf("Yes\n");
  else printf("No\n");

	return 0;
}
