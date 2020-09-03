#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);

    int x = 0;
    int flag = 0;
    for(x = 0; ; ++x){
        if((int)(x * 1.08) == n){
            flag = 1;
            break;
        }else if(x > n) break;
    }

    if(flag == 1) printf("%d\n", x);
    else printf(":(\n");

    return 0;
}
