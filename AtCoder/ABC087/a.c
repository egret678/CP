#include <stdio.h>

int main(void){
    int a, b, c, x;

    scanf("%d %d %d %d", &a, &b, &c, &x);

    int cnt = 0;
    for(int i = 0;i <= a;++i){
        for(int j = 0;j <= b;++j){
            for(int k = 0;k <= c;++k){
                if((500 * i) + (100 * j) + (50 * k) == x) cnt++;
            }
        }
    }

    printf("%d\n", cnt);

    return 0;
}