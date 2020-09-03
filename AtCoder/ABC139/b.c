#include <stdio.h>

int main(){
    int a, b;

    scanf("%d %d", &a, &b);

    int i;
    for(i = 0; (a - 1) * i + 1 < b; ++i){}

    printf("%d\n", i);

    return 0;
}
