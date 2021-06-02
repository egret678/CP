#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define INF32 2147483647 //2.147483647×10^{9}:32bit整数のinf
#define INF64 9223372036854775807 //9.223372036854775807×10^{18}:64bit整数のinf
#define MOD 1000000007

ll myceil(ll a,ll b){return (a + (b - 1)) / b;}
ll myfloor(ll a,ll b){return a / b;}
int ReLU(int x){return x >= 0 ? x : 0;}
int gcd(int a, int b){ return (a % b) ? gcd(b, a % b) : b;}
int lcm(int a, int b){ return (a / gcd(a, b)) * b;}
template<class t,class u> void chmax(t& a,u b){if(a < b) a = b;}
template<class t,class u> void chmin(t& a,u b){if(b < a) a = b;}
template<class T> void inner_product(const vector<pair<T, T>>& vec, T& product){for(const auto& e:vec) product += e.first * e.second;}

int factorial(int n){
    if(n == 0) return 1;
    else return factorial(n - 1) * n;
}
int is_prime(int x){
    if(x <= 1) return 0;
    for(int i = 2; i * i <= x; i++){
        if(x % i == 0) return 0;
    }
    return 1;
}
int ngcd(int n, int a[])
{
    int i, d;
    d = a[0];
    for (i = 1; i < n && d != 1; i++)
        d = gcd(a[i], d);
    return d;
}
vector<ll> enum_divisors(ll n){
    vector<ll> res;
    for(ll i = 1; i * i <= n; ++i){
        if(n % i == 0){
            res.push_back(i);
            if(n / i != i) res.push_back(n / i);
        }
    }
    sort(res.begin(), res.end());
    return res;
}
int my_calc(const int a, const int b, const char& ope){
    if(ope == '+') return a + b;
    else if(ope == '-') return a - b;
    else return 0;
}

struct Edge {
    int to;     // 辺の行き先
    int weight; // 辺の重み
    Edge(int t, int w) : to(t), weight(w) { }
};

void dfs_grid(int h, int w, int H, int W, const vector<string>& field, vector<vector<bool>>& seen){
    const int dx[4] = {1, 0, -1, 0};
    const int dy[4] = {0, 1, 0, -1};

    seen[h][w] = true;

    for(int dir = 0; dir < 4; ++dir){
        int nh = h + dx[dir];
        int nw = w + dy[dir];

        if(nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
        if(field[nh][nw] == 'x') continue;
        if(seen[nh][nw]) continue;
        dfs_grid(nh, nw, H, W, field, seen);
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);

    ll x;
    cin >> x;

    int cnt = 0;
    for(int i = 1; i <= x; ++i){
        string single = to_string(i);
        string doubled = single + single;
        if(stoll(doubled) <= x) cnt++;
        else break;
    }

    cout << cnt << '\n';

    return 0;
}
