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
int my_calc(const int a, const int b, const char& ope){
    if(ope == '+') return a + b;
    else if(ope == '-') return a - b;
    else return 0;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<int, int>> p(n);
    for(auto& [x, y]:p) cin >> x >> y;

    bool ans = false;
    for(int i = 0; i < n - 2; ++i){
        for(int j = i + 1; j < n - 1; ++j){
            for(int k = j + 1; k < n; ++k){
                auto [x1, y1] = p[i];
                auto [x2, y2] = p[j];
                auto [x3, y3] = p[k];
                x1 -= x3;
                x2 -= x3;
                y1 -= y3;
                y2 -= y3;
                if(x1 * y2 == x2 * y1){
                    ans = true;
                }
            }
        }
    }

    if(ans) cout << "Yes" << '\n';
    else cout << "No" << '\n';

    return 0;
}
