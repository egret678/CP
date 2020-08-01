#include <stdio.h>

int main(void){
    int n;
    int p[100];

    scanf("%d", &n);
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        scanf("%d", &p[i]);
        if((i + 1) != p[i]) cnt++;
    }

    if(cnt == 0 || cnt == 2) puts("YES");
    else puts("NO");

    return 0;
}
