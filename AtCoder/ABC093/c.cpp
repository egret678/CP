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
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    if(a > b) swap(a, b);
    if(b > c) swap(b, c);
    if(a > b) swap(a, b);

    int cnt = 0;
    if((c - b) % 2 == 0){
        cnt = (c - b) / 2;
    }else{
        cnt = (c - b) / 2 + 1;
        a++;
    }
    if((c - a) % 2 == 0){
        cnt += (c - a) / 2;
    }else{
        cnt += (c - a) / 2 + 2;
    }

    cout << cnt << '\n';

    return 0;
}
