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

    string s;
    cin >> s;

    auto s_ini = s;
    int n = s.size();
    vector<int> ope(n-1);
    ll sum = 0;
    for(int bit = 0; bit < (1 << (n - 1)); ++bit){
        s = s_ini;
        int cur = 0;
        for(int i = 0; i < (n - 1); ++i){
            if(bit & (1 << i)){
                s.insert(s.begin() + (i + 1) + cur, '+');
                cur++;
            }
        }
        //cout << s << '\n';
        s.insert(s.end(), '=');
        //cout << s << '\n';
        ll sum_num = 0;
        for(const auto& e:s){
            if('0' <= e && e <= '9'){
                sum_num = sum_num * 10 + (e - '0');
            }else{
                sum += sum_num;
                sum_num = 0;
                //cout << sum << '\n';
            }
        }
        //cout << sum_num << '\n';
    }

    cout << sum << '\n';

    return 0;
}
