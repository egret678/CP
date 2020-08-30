#include <stdio.h>

int main(){
    int k;
    int a[1000001];

    scanf("%d", &k);

    a[1] = 7 % k;
    for(int i = 2; i <= k; ++i){
        a[i] = (10 * a[i-1] + 7) % k;
    }

    int flag = 0;
    for(int i = 1; i <= k; ++i){
        if(a[i] == 0){
            printf("%d\n", i);
            flag = 1;
            break;
        }
    }
    if(flag == 0) printf("-1\n");

    return 0;
}
