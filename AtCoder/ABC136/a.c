#include <stdio.h>

int main(){
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if((c - (a - b)) >= 0) printf("%d\n", c - (a - b));
    else printf("0\n");

    return 0;
}