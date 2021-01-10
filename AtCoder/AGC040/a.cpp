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

    string s;
    cin >> s;

    int n = (int) s.size();
    vector<int> a(n + 1);
    for (int i = 0; i < n; i++) {
        if (s[i] == '<') {
        a[i + 1] = max(a[i + 1], a[i] + 1);
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '>') {
        a[i] = max(a[i], a[i + 1] + 1);
        }
    }
    ll ans = 0;
    for (int i = 0; i <= n; i++) {
        ans += a[i];
    }
    cout << ans << '\n';

    /*
    for(int i = 1; i < s.size() + 1; ++i){
        if(s[i-1] == '<'){
            if(a[i-1] < 0){
                sum += abs(a[i-1]) * (cnt + 1);
                a[i-1] = 0;
            }
            if(s[i-2] == '>' && a[i-1] > 0){
                a[i-1] = 0;
            }
            a[i] = a[i-1] + 1;
            cnt = 0;
        }
        else{
            a[i] = a[i-1] - 1;
            cnt++;
        }
        sum += a[i];
        if(i == s.size()){
            if(a[i] < 0){
                sum += abs(a[i]) * (cnt + 1);
            }
        }
    }

    sort(a.begin(), a.end());
    if(a[0] < 0){
        sum += abs(a[0]) * (cnt + 1);
    }
    */

    //cout << sum << '\n';

    return 0;
}
