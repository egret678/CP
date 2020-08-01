#include <bits/stdc++.h>
using namespace std;


int main() {
  long long N;
  cin >> N;
  int i;
  vector<int> a(sqrt(N));
  int count = 0;
  for(i=1; i < sqrt(N); i++){
    if(N % i ==0){
      a.at(count) = i;
      count++;
    }
  }
//  cout << a.at(1) <<endl;
//  cout << N/a.at(1) <<endl;
  long long min = a.at(0) + N/a.at(0);
  for(i=1; i < count; i++){
    if(a.at(i) + N/a.at(i) < min) min = a.at(i) + N/a.at(i);
  }

  cout << min-2 <<endl;
}
