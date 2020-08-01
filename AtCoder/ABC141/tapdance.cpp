#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  string ans;
  int i;
  for(i = 0; i < S.size(); i++){
    if((i % 2) == 1){
      if(S.at(i) == 'R'){
        cout << "No" << endl;
        ans = "No";
        break;
      }
    }
    else{
      if(S.at(i) == 'L'){
        cout << "No" << endl;
        ans = "No";
        break;
      }
    }
  }
  if(ans != "No"){
    cout << "Yes" << endl;
  }
}
