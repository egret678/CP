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

    int ans = 0;
    for(int i = 1; i <= n; i += 2){
        int cnt = 0;
        for(int j = 1; j <= sqrt((float)i); j += 2){
            if((i % j) == 0){
                if(j == (i / j)){
                    cnt++;
                }else{
                    cnt += 2;
                }
            }
        }
        if(cnt == 8){
            ans++;
            //cout << i << '\n';
        }
    }

    cout << ans << '\n';

    return 0;
}
