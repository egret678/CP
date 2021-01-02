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
    vector<vector<int>> a(2, vector<int>(n));
    for(auto& row:a){
        for(auto& e:row){
            cin >> e;
        }
    }

    vector<vector<int>> dp(2, vector<int>(n));
    dp[0][0] = a[0][0];
    dp[1][0] = a[0][0] + a[1][0];
    for(int j = 1; j < n; ++j){
        dp[0][j] = dp[0][j-1] + a[0][j];
    }
    for(int i = 1; i < 2; ++i){
        for(int j = 1; j < n; ++j){
            if(dp[i-1][j] > dp[i][j-1]){
                dp[i][j] = dp[i-1][j] + a[i][j];
            }else{
                dp[i][j] = dp[i][j-1] + a[i][j];
            }
        }
    }

    cout << dp[1][n-1] << '\n';
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