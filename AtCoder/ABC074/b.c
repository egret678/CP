#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef long long ll;

int abs_val(int a, int b){return (a - b) > 0 ? (a - b) : (b - a);}

int main(){
    int n, k;
    int x[100] = {0};

    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; ++i){
        scanf("%d", &x[i]);
    }

    int sum = 0;
    for(int i = 0; i < n; ++i){
        if(abs_val(k, x[i]) > abs_val(0, x[i])){
            sum += abs_val(0, x[i]) * 2;
        }else{
            sum += abs_val(k, x[i]) * 2;
        }
    }

    printf("%d\n", sum);

    return 0;
}
