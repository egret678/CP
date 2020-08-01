#include <stdio.h>
#include <math.h>

int main(void){
    int a;
    scanf("%d", &a);

    printf("%d\n", (int)(a + pow((double)a, 2.0) + pow((double)a, 3.0)));
    
    return 0;
}