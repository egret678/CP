#include <stdio.h>

int main(){
    int n, x, t;

    scanf("%d %d %d", &n, &x, &t);

    int ans = ((n - 1 + x) / x) * t;

    printf("%d\n", ans);

    return 0;
}