#include <stdio.h>
#include <string.h>

int main(){
    char s[100001];
    char c[] = "CODEFESTIVAL2016";

    scanf("%s", s);

    int cnt = 0;
    for(int i = 0; i < strlen(s); ++i){
        if(s[i] != c[i]) cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}
