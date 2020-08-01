#include <stdio.h>

int main(){
    int a;
    char s[20];

    scanf("%d %s", &a, s);

    if(a >= 3200) puts(s);
    else puts("red");

    return 0;
}