#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define INF32 2147483647 //2.147483647×10^{9}:32bit整数のinf
#define INF64 9223372036854775807 //9.223372036854775807×10^{18}:64bit整数のinf
#define MOD 1000000007

ll myceil(ll a,ll b){return (a + (b - 1)) / b;}
ll myfloor(ll a,ll b){return a / b;}
template<class t,class u> void chmax(t& a,u b){if(a < b) a = b;}
template<class t,class u> void chmin(t& a,u b){if(b < a) a = b;}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int d, n;
    cin >> d >> n;

    int ans = 0;
    if(n < 100){
        if(d == 0) ans = n;
        else if(d == 1) ans = d * 100 * n;
        else ans = pow(100, (double)d) * n;
    }else{
        if(d == 0) ans = 101;
        else if(d == 1) ans = d * 100 * 101;
        else ans = pow(100, (double)d) * 101;
    }
    cout << ans << '\n';

    return 0;
}