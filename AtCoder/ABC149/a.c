#include <stdio.h>
#include <string.h>

int main(void){
    char s[200], t[500];

    scanf("%s %s", s, t);

    strncat(t, s, sizeof(s));

    //printf("%lu\n", sizeof(s));
    puts(t);

    return 0;
}