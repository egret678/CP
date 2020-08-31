#include <stdio.h>

int main(){
    int a, b, c, k;

    scanf("%d %d %d %d", &a, &b, &c, &k);

    int sum = 0;
    if(a < k){
        sum += a;
        if(k - (a + b) > 0){
            sum += -1 * (k - (a + b));
        }
    }else{
        sum = k;
    }

    printf("%d\n", sum);

    return 0;
}
