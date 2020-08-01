#include <stdio.h>

int main(){
    char a;

    scanf("%c", &a);

    if(a >= 'a' && a <= 'z') puts("a");
    else puts("A");

    return 0;
}