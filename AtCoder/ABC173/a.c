#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);

    printf("%d\n", (1000 - (n % 1000)) % 1000);

    return 0;
}