#include <stdio.h>

int main(void){
    int n;

    scanf("%d", &n);
#if 0
    if(n == 1) printf("%f\n", (float)n);
    else if((n % 2) == 0) printf("%f\n", 0.5);
    else printf("%f\n", (float)((n/2) + 1)/n);
#endif

    printf("%f\n", (double)((n - n / 2) / (double)n));

    return 0;
}