#include <stdio.h>

int main(void){
    int a, b;

    scanf("%d %d", &a, &b);

    if((a + b) % 2) printf("IMPOSSIBLE\n");
    else printf("%d\n", (a + b) / 2);

    return 0;
}