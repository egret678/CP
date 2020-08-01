#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
  string s;
  string t;
  string u;
  int a,b;
  cin >> s;
  cin >> t;
  scanf("%d", &a);
  scanf("%d", &b);
  cin >> u;

  if(s == u) a = a - 1;
  if(t == u) b = b - 1;

  printf("%d %d\n", a, b);

	return 0;
}
