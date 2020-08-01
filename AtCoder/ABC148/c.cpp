#include <bits/stdc++.h>
using namespace std;


unsigned euclidean_gcd(unsigned a, unsigned b) {
  if(a < b) return euclidean_gcd(b, a);
  unsigned r;
  while ((r=a%b)) {
    a = b;
    b = r;
  }
  return b;
}

int main() {
  long long A, B;
  cin >> A;
  cin >> B;

  long long r = 0;
  r = euclidean_gcd(A,B);

  //cout << A << endl;
  //cout << B << endl;
  //cout << A*B << endl;
  //cout << r << endl;
  cout << (A*B)/r << endl;
}
