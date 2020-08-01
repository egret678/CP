#include <bits/stdc++.h>
using namespace std;


int main() {
  int N;
  cin >> N;
  int flag = 0;
  for(int i=1; i < 10; i++){
      if(N % i ==0 && N / i < 10 ){
        flag = 1;
        break;
      } 
      else flag = 0;
  }
  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;
}
