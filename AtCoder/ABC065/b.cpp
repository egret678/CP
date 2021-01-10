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

    int n;
    cin >> n;
    vector<int> a(n);
    for(auto& e:a) cin >> e;
    a.insert(a.begin(), 0);

    int res = 0, cnt = 0, dst = 1;
    for(int i = 1; i <= n; ++i){
        if(a[dst] == 2){
            cnt++;
            res = 1;
            break;
        }else{
            cnt++;
            dst = a[dst];
        }
    }

    if(res == 1) cout << cnt << '\n';
    else cout << -1 << '\n';

    return 0;
}
