#include <stdio.h>
#include <string.h>

int main(){
    int k;
    char s[101], t[101];

    scanf("%d %s", &k, s);

    if(strlen(s) <= k){
        puts(s);
        return 0;
    }
    else{
        int i;
        for(i = 0; i < k + 3; ++i){
            if(i < k) t[i] = s[i];
            else t[i] = '.';
        }
        t[i] = '\0';
    }

    puts(t);

    return 0;
}
