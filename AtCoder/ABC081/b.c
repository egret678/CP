#include <stdio.h>

int main(void){
    int n;
    int a[250];

    scanf("%d", &n);
    for(int i = 0;i < n;++i){
        scanf("%d", &a[i]);
    }

    int flag = 0;
    int cnt = 0;
    while(1){
        for(int i = 0;i < n;++i){
            if(a[i] % 2 == 0) a[i] /= 2;
            else{
                flag = 1;
                break;
            }
        }
        if(flag == 1) break;
        else cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}