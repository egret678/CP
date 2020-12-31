#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define INF32 2147483647 //2.147483647×10^{9}:32bit整数のinf
#define INF64 9223372036854775807 //9.223372036854775807×10^{18}:64bit整数のinf
#define MOD 1000000007

ll myceil(ll a,ll b){return (a+(b-1))/b;}
ll myfloor(ll a,ll b){return a/b;}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;

    cin >> n;

    ll min_val = INF64;
    for(ll i = 1; i <= sqrt(n); ++i){
      if((n % i) == 0){
        ll i_pair = n / i;
        if(min_val > (i + i_pair - 2)){
          min_val = (i + i_pair - 2);
        }
      }
    }

    cout << min_val << '\n';

    return 0;
}