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

    int n, m;
    map<string, int> data;
    string key;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> key;
        data[key]++;
    }
    cin >> m;
    for(int i = 0; i < m; ++i){
        cin >> key;
        data[key]--;
    }
    int max = data[key];
    for(const auto& [key, val]:data){
        if(val > max){
            max = val;
        }
    }

    if(max >= 0){
        cout << max << '\n';
    }else{
        cout << 0 << '\n';
    }

    return 0;
}
