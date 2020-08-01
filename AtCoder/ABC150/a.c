#include <stdio.h>

int main(void){
    int k, x;

    scanf("%d %d", &k, &x);

    if(500*k >= x) puts("Yes");
    else puts("No");

    return 0;
}