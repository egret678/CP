#include <bits/stdc++.h>
using namespace std;


int main() {
  string S, S_a, S_b;
  cin >> S;

  int half_N = S.size()/2;

  S_a = S.substr(0, half_N);
  S_b = S.substr(half_N);

  int i, ret=0;
  for(i=0;i<half_N;i++){
    if(S_a.at(i) != S_b.at(S_b.size()-1-i)) ret++;
  }

  cout << ret << endl;
}
