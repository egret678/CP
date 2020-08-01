#include <stdio.h>

int main(void){
    char s[15], t[15];

    scanf("%s", s);
    scanf("%s", t);

    //printf("%lu\n", sizeof(s));
    int flag = 0;
    int i = 0;
    while(s[i] != '\0'){
        //printf("%c\n", s[i]);
        //printf("%c\n", t[i]);
        if(s[i] != t[i]) flag = 1;
        //printf("%d\n", i);
        i++;
    }

    if(flag) puts("No");
    else puts("Yes");

    return 0;
}