#include <bits/stdc++.h>
using namespace std;


int main() {
  int N;
  string S;
  cin >> N;
  cin >> S;

  int count = 0;
  for(int i=0; i < N; i++){
    if(S[i] != S[i + 1]){
      count++;
    }
  }
  cout << count << endl;
}
