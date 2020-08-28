#include <stdio.h>
#include <string.h>

int main(){
    char n[200010];

    scanf("%s", n);

    int len = strlen(n);
    int ans = 0;
    for(int i = 0; i < len; ++i){
        ans += (n[i] - '0');
    }

    if((ans % 9) == 0) puts("Yes");
    else puts("No");

    return 0;
}
