#include <stdio.h>
#include <string.h>

int main(){
    char s[4];

    scanf("%s", s);

    int cnt = 0;
    for(int i = 0; i < strlen(s); ++i){
        if(s[i] == 'R') cnt++;
    }

    if(s[0] == 'R' && s[1] == 'S' && s[2] == 'R') cnt = 1;

    printf("%d\n", cnt);

    return 0;
}
