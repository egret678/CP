#include <stdio.h>
#include <string.h>

int main(void){
    char s[10], t[10];

    scanf("%s %s", s, t);

    int i = 0, cnt = 0;
    while(s[i] != '\0'){
        if(s[i] == t[i]) cnt++;
        i++;
    }

    printf("%d\n", cnt);

    return 0;
}