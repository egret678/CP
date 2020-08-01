#include <stdio.h>

int main(void){
    char c;

    scanf("%c", &c);

    c += 1;
    puts(&c);

    return 0;
}