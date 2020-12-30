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

    ll q, h, s, d, n;

    cin >> q >> h >> s >> d >> n;

    h = min(h, 2 * q);
    s = min(s, 2 * h);
    d = min(d, 2 * s);
    ll ans = (n / 2) * d + (n % 2) * s;
    /*
    for(int i = 0; 0.25 * i <= n; ++i){
        for(int j = 0; (0.25 * i + 0.5 * j) <= n; ++j){
            for(int k = 0; (0.25 * i + 0.5 * j + 1.0 * k) <= n; ++k){
                for(int l = 0; (0.25 * i + 0.5 * j + 1.0 * k + 2.0 * l) <= n; ++l){
                    if((0.25 * i + 0.5 * j + 1.0 * k + 2.0 * l) == n && min > (q * i + h * j + s * k + d * l)){
                        min = (q * i + h * j + s * k + d * l);
                    }
                }
            }
        }
    }
    */

    cout << ans << '\n';

    return 0;
}