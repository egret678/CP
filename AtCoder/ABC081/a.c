#include <stdio.h>
#include <stdlib.h>

int main(void){
    char s[5];

    scanf("%s", s);

    printf("%d\n", atoi(s) % 10 + (atoi(s) / 10) % 10 + atoi(s) / 100);

    return 0;
}