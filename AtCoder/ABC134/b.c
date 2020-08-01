#include <stdio.h>

int main(void){
    int n, d;

    scanf("%d %d", &n, &d);

    int i;
    for(i = 1; i <= n; ++i){
        if((((i - 1) * 2 * d) + 2 * d) + i >= n ) break;
    }

    printf("%d\n", i);

    return 0;
}