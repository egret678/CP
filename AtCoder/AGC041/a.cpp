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

    ll n, a, b;

    cin >> n >> a >> b;

    ll ans = 0;
    if((b - a) % 2 == 0){
        ans = (b - a) / 2;
    }else{
        ans = min(a - 1, n - b) + 1 + (b - a) / 2;
    }

    cout << ans << '\n';

    return 0;
}