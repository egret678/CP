#include <stdio.h>

int main(void){
    char s[200005], t[200005];

    scanf("%s %s", s, t);

    int ans = 0;
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] != t[i]) ans++;
        i++;
    }

    printf("%d\n", ans);

    return 0;
}