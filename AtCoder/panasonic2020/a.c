#include <stdio.h>
typedef long long ll;

int main(){
    int k;
    char a[] = {1, 1, 1, 2, 1, 2, 1, 5, 2, 2, 1, 5, 1, 2, 1, 14, 1, 5, 1, 5, 2, 2, 1, 15, 2, 2, 5, 4, 1, 4, 1, 51};

    scanf("%d", &k);
    printf("%d\n", a[k-1]);

    return 0;
}
