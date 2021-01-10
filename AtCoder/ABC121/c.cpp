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

int factorial(int n){
    if(n == 0) return 1;
    else return factorial(n - 1) * n;
}
int my_calc(const int a, const int b, const char& ope){
    if(ope == '+') return a + b;
    else if(ope == '-') return a - b;
    else return 0;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    map<ll, int> drink;
    ll a;
    int b;
    for(int i = 0; i < n; ++i){
        cin >> a;
        cin >> b;
        drink[a] += b;
    }
    //cout << drink.size() << '\n';
    ll ans = 0, cnt = 0;
    for(const auto& [key, val]:drink){
        int i = 0;
        while(cnt < m){
            if(i >= drink[key]) break;
            ans += key;
            i++;
            cnt++;
        }
    }
    //cout << drink.max_size() << '\n';
    cout << ans << '\n';

    return 0;
}
