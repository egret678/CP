#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define INF32 2147483647 //2.147483647×10^{9}:32bit整数のinf
#define INF64 9223372036854775807 //9.223372036854775807×10^{18}:64bit整数のinf
#define MOD 1000000007

ll myceil(ll a,ll b){return (a + (b - 1)) / b;}
ll myfloor(ll a,ll b){return a / b;}
int ReLU(int x){return x >= 0 ? x : 0;}
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

template<class T> void inner_product(const vector<pair<T, T>>& vec, T& product){for(const auto& e:vec) product += e.first * e.second;}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);

    ll n, x;
    cin >> n >> x;
    vector<pair<ll, ll>> drink(n);
    ll sum = 0;
    int ans = 1;
    for(auto& [v, p]:drink){
        cin >> v >> p;
        sum += v * p;
        if(sum > x * 100){
            cout << ans << '\n';
            return 0;
        }
        ans++;
    }

    cout << -1 << '\n';

    return 0;
}
