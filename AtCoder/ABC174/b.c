#include <stdio.h>

int main(){
    long long n, d;
    long long x[200005], y[200005];

    scanf("%lld %lld", &n, &d);
    for(int i = 0; i < n; ++i){
        scanf("%lld %lld", &x[i], &y[i]);
    }

    //printf("%d\n", -1 * -1);

    int cnt = 0;
    for(int i = 0; i < n; ++i){
        //printf("%d %d\n", (x[i] * x[i]) + (y[i] * y[i]), (d * d));
        if(((x[i] * x[i]) + (y[i] * y[i])) <= (d * d)) cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}
