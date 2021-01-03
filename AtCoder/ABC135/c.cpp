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

    int n;
    cin >> n;
    vector<int> a(n+1), b(n);
    for(auto& e:a) cin >> e;
    for(auto& e:b) cin >> e;

    int diff_val = 0;
    ll sum = 0;
    for(int i = 0; i < n; ++i){
        diff_val = a[i] - b[i];
        if(diff_val > 0){
            sum += b[i];
        }else{
            sum += a[i] - max(-a[i+1], diff_val);
            a[i+1] += max(-a[i+1], diff_val);
        }
    }

    cout << sum << '\n';
    /*
    for(const auto& row:a){
        for(const auto& e:row){
            cout << 2 * e << " ";
        }
        cout << '\n';
    }
    */
    return 0;
}