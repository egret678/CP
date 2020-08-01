#include <bits/stdc++.h>
using namespace std;


int main() {
  int N, half_N;
  string S, S_a, S_b;
  cin >> N >> S;

  half_N = N/2;

  S_a = S.substr(0, half_N);
  S_b = S.substr(half_N);

  if(S_a == S_b) cout << "Yes" << endl;
  else cout << "No" << endl;
}
