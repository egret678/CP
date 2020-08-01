#include <stdio.h>
#include <string.h>

int main(void){
    char s[10];

    scanf("%s", s);

    if(strcmp(s, "SUN") == 0) puts("7");
    else if(strcmp(s, "MON") == 0) puts("6");
    else if(strcmp(s, "TUE") == 0) puts("5");
    else if(strcmp(s, "WED") == 0) puts("4");
    else if(strcmp(s, "THU") == 0) puts("3");
    else if(strcmp(s, "FRI") == 0) puts("2");
    else if(strcmp(s, "SAT") == 0) puts("1");

    return 0;
}