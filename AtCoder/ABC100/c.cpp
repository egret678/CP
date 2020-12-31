#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define INF32 2147483647 //2.147483647×10^{9}:32bit整数のinf
#define INF64 9223372036854775807 //9.223372036854775807×10^{18}:64bit整数のinf
#define MOD 1000000007

ll myceil(ll a,ll b){return (a+(b-1))/b;}
ll myfloor(ll a,ll b){return a/b;}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    cin >> n;

    int sum = 0;
    for(int i = 0; i < n; ++i){
        ll a = 0;
        cin >> a;
        ll cnt = 0;
        while((a % 2) == 0){
            a /= 2;
            cnt++;
        }
        sum += cnt;
    }

    cout << sum << '\n';

    return 0;
}