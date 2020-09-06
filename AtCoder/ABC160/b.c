#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef long long ll;
typedef int keytype;

int main(){
    ll x;

    scanf("%lld", &x);

    ll max = 0;
    max += (x / 500) * 1000;
    max += ((x % 500) / 5) * 5;
#if 0
    for(int i = 0; (500 * i) < x; ++i){
        for(int j = 0; (500 * i) + (5 * j) < x; ++j){
            if(max < ((1000 * i) + (5 * j))) max = ((1000 * i) + (5 * j));
        }
    }
#endif

    printf("%lld\n", max);

    return 0;
}
