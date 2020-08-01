#include <stdio.h>

int digit_sum(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(void){
    int n, a, b;

    scanf("%d %d %d", &n, &a, &b);

    int sum = 0;
    int sum_k = 0;
#if 0
    for(int i = 0;i <= n;++i){
        sum_k = i % 10 + ((i / 10) % 10) + ((i / 100) % 10) + ((i / 1000) % 10) + (i / 10000);
        if(a <= sum_k && sum_k <= b) sum += i;
    }
#endif

    for(int i = 0;i <= n;++i){
        sum_k = digit_sum(i);
        if(a <= sum_k && sum_k <= b) sum += i;
    }

    printf("%d\n", sum);

    return 0;
}
