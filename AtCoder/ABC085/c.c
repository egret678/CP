#include <stdio.h>

int main(){
    int n, y;

    scanf("%d%d", &n, &y);

    int res_a = -1, res_b = -1, res_c = -1;
    int k = 0;
    for(int i = 0; i <= n; ++i){
        for(int j = 0; j + i <= n; ++j){
            k = n - i - j;
            if((10000 * i + 5000 * j + 1000 * k) == y){
                res_a = i;
                res_b = j;
                res_c = k;
                break;
            }
        }
    }

    printf("%d %d %d\n", res_a, res_b, res_c);

    return 0;
}
