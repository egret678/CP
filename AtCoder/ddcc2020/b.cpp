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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for(auto& e:a){
        cin >> e;
        sum += e;
    }

    ll div = sum / 2;
    int left = 0, right = n - 1;
    ll sum_left = 0, sum_right = 0;
    for(left = 0; left < n; ++left){
        sum_left += a[left];
        if(sum_left >= div) break;
    }
    for(right = n - 1; right > 0; --right){
        sum_right += a[right];
        if(sum_right >= div) break;
    }
    ll ans = 0;
    if(sum_left <= sum_right) ans = sum_left - (sum - sum_left);
    else ans = sum_right - (sum - sum_right);

    cout << ans << '\n';

    return 0;
}
