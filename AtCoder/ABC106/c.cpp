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

    string s;
    ll k;
    cin >> s >> k;

    bool flag = false;
    int index;
    for(int i = 0; i < k; ++i){
        if(s[i] == '1'){
            flag = true;
        }else{
            flag = false;
            index = i;
            break;
        }
    }
    if(flag) cout << '1' << '\n';
    else cout << s[index] << '\n';

    return 0;
}
