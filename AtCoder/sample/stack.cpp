//ABC120 C - Unification
#include<bits/stdc++.h>

using namespace std;

using int64 = long long;

int main() {
  string s;
  cin >> s;
  stack< int > st;
  int ret = 0;
  for(int i = 0; i < s.size(); i++) {
    if(st.size() && st.top() != s[i]) {
      ++ret;
      st.pop();
    } else {
      st.push(s[i]);
    }
  }
  cout << 2 * ret << endl;
}




