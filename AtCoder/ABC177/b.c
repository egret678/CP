#include <stdio.h>
#include <string.h>

int main(){
    char s[1001], t[1001];

    scanf("%s %s", s, t);

    int max = 0;
    for(int i = 0; i < strlen(s) - strlen(t) + 1; ++i){
        int cnt = 0;
        for(int j = 0; j < strlen(t); ++j){
            if(s[i+j] == t[j]) cnt++;
        }
        if(max < cnt) max = cnt;
    }

    printf("%d\n", (int)strlen(t) - max);

    return 0;
}
