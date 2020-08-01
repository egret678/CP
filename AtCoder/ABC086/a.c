#include <stdio.h>

int main(void){
    int a, b;

    scanf("%d %d", &a, &b);

    if((a % 2) == 1 && (b % 2) == 1) puts("Odd");
    else puts("Even");

    return 0;
}