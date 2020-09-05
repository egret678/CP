#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef long long ll;

int abs_val(int a, int b){return (a - b) > 0 ? (a - b) : (b - a);}

int main(){
    int n, a;

    scanf("%d %d", &n, &a);

    printf("%d\n", n * n - a);

    return 0;
}
