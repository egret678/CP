#include <bits/stdc++.h>
using namespace std;


int main() {
  int N;
  string S, T;
  cin >> N;
  cin >> S;
  cin >> T;

  string ret = "";
  for(int i=0;i<N;i++){
    ret.append(1, S.at(i));
    ret.append(1, T.at(i));
  }

  cout << ret << endl;
}
