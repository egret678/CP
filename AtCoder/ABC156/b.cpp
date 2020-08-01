#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main (void) {
    ll n;
    int k;

    scanf("%lld%d", &n, &k);

    ll ans = 1;
    for(ll i = 1; i < n; ++i){
        if((pow(k, i) - 1) >= n){
            ans = i;
            break;
        }
    }
    printf("%lld\n", ans);

    return 0;
}