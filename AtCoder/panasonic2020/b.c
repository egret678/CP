#include <stdio.h>
typedef long long ll;

int main(){
    ll h, w;

    scanf("%lld %lld", &h, &w);

    ll sum = 0;
    /*
    if((h % 2) == 0){
        sum = (h * w) / 2;
    }else{
        sum = ((h - 1) * w) / 2 + ((w + 1) / 2);
    }
    */

    if((h != 1) && (w != 1)) sum = ((h * w) + 1) / 2;
    else sum = 1;
    /*
    for(ll i = 0; i < h; ++i){
        if((i % 2) == 0){
            sum += ((w + 1) / 2);
        }else{
            sum += (w / 2);
        }
    }
    */

    printf("%lld\n", sum);

    return 0;
}
