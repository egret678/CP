#include <stdio.h>

int main(void){
    int a, b, c, d;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    while(1){
        if((c -= b) <= 0){
            printf("Yes\n");
            break;
        }
        if((a -= d) <= 0){
            printf("No\n");
            break;
        }
    }

    return 0;
}