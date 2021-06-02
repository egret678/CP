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

    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        cin >> b[i];
    }

    int min_a = min_element(a.begin(), a.end()) - a.begin();
    int min_b = min_element(b.begin(), b.end()) - b.begin();
    int min_sum = *min_element(a.begin(), a.end()) + *min_element(b.begin(), b.end());
    sort(a.begin(), a.end()), sort(b.begin(), b.end());
    int ans;
    if(min_a == min_b){
        ans = min(min_sum, max(a[0], b[1]));
        ans = min(ans, max(a[1], b[0]));
    }else{
        ans = max(a[0], b[0]);
    }

    cout << ans << endl;

    return 0;
}