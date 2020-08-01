#include <stdio.h>

int main(void){
    int s, w;
    
    scanf("%d %d", &s, &w);
    
    if(w >= s) printf("unsafe\n");
    else printf("safe\n");

    return 0;
}