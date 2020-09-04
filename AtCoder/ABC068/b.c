#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef long long ll;

int main(){
    int n;
    char a[100] = {0};

    scanf("%d", &n);

    int ans = 1;
    for(int i = 2; i <= n; i *= 2){
        ans = i;
    }

#if 0
    int j;
    for(int i = 1; i <= n; ++i){
        j = i;
        for(;;){
            if((j % 2) == 0){
                a[i]++;
                j = j / 2;
            }else break;
            //printf("%d\n", j);
            if(j == 0) break;
        }
    }

    int max = a[1];
    int ans = 1;
    for(int i = 1; i <= n; ++i){
        //printf("%d\n", a[i]);
        if(max < a[i]){
            max = a[i];
            ans = i;
        }
    }
#endif

    printf("%d\n", ans);

    return 0;
}
