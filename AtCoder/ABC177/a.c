#include <stdio.h>

int main(){
    int d, t, s;

    scanf("%d %d %d", &d, &t, &s);

    if(((double)d / (double)s) <= t) puts("Yes");
    else puts("No");

    return 0;
}
