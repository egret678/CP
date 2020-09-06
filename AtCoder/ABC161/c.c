#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef long long ll;
typedef int keytype;

int main(){
    ll n, k;

    scanf("%lld %lld", &n, &k);

    ll ans;
    if((n % k) <= k - (n % k)) ans = (n % k);
    else ans = k - (n % k);

    printf("%lld\n", ans);

    return 0;
}
