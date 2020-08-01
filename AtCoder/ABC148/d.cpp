#include <bits/stdc++.h>
using namespace std;


int main() {
  int N;
  cin >> N;
  vector<int> v(N);
  for(auto itr=v.begin();itr!=v.end();++itr){
    cin >> *itr;
  }

  for(auto itr=v.begin();itr!=v.end();++itr){
    cout << *itr << endl;
  }

}
