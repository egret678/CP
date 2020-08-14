#include <stdio.h>
#include <string.h>

int is_substr(char s[], char t[], int i){
    int flag = 1;

    if(s[i] == '\0') flag = 0;

    for(int j = 0; j < strlen(t); ++j, ++i){
        if(s[i] != t[j]){
            flag = 0;
            break;
        }
    }

    return flag;
}

int main(){
    char s[100010];
    int dp[100010] = {0};
    char t[4][8]={"dream","dreamer","erase","eraser"};

    scanf("%s", s);

    dp[0] = 1;
    for(int i = 0; i < strlen(s); ++i){
        if(dp[i] == 0) continue;
        for(int j = 0; j < 4; ++j){
#if 0
            int k = 0;
            int flag = 1;
            while(t[j][k] != '\0'){
                if(s[i + k] != t[j][k]){
                    flag = 0;
                    break;
                }
                k++;
            }
#endif
            if(is_substr(s, t[j], i) == 1) dp[i + strlen(t[j])] = 1;
        }
    }

    puts(dp[strlen(s)] ? "YES" : "NO");

    return 0;
}