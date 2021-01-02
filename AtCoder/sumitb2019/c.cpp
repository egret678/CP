#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define INF32 2147483647 //2.147483647×10^{9}:32bit整数のinf
#define INF64 9223372036854775807 //9.223372036854775807×10^{18}:64bit整数のinf
#define MOD 1000000007

ll myceil(ll a,ll b){return (a+(b-1))/b;}
ll myfloor(ll a,ll b){return a/b;}
template<class t,class u> void chmax(t&a,u b){if(a<b)a=b;}
template<class t,class u> void chmin(t&a,u b){if(b<a)a=b;}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;

    bool ans = false;
    int lim = x / 100;
    x %= 100;

    if(5 * lim >= x) ans = true;

    /*
    for(int i = 0; i < limit; ++i){
        for(int j = 0; j < limit - i; ++j){
            for(int k = 0; k < limit - i - j; ++k){
                for(int l = 0; l < limit - i - j - k; ++l){
                    for(int m = 0; m < limit - i - j - k - l; ++m){
                        for(int n = 0; n < limit - i - j - k - l - m; ++n){
                            if(x == (0 * i + 1 * j + 2 * k + 3 * l + 4 * m + 5 * n)){
                                ans = true;
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    */

    cout<<ans<<endl;

    return 0;
}