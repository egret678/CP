#include <stdio.h>

int main(void){
    int n, a[100001], res[100001];

    scanf("%d", &n);
    for(int i = 1; i <= n; ++i){
        scanf("%d", &a[i]);
        res[a[i]] = i;
    }

    for(int i = 1; i <= n; ++i){
        printf("%d ", res[i]);
    }
    puts("\n");

    return 0;
}