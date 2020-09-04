#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef long long ll;

int main(){
    char a[10], b[5];
    int c;

    scanf("%s %s", a, b);
    strcat(a, b);
    c = atoi(a);
    //printf("%d\n", c);

    int flag = 0;
    for(int i = 0; i * i <= c; ++i){
        //printf("%d\n", i * i);
        if((i * i) == c){
            flag = 1;
        }
    }

    if(flag == 1) puts("Yes");
    else puts("No");

    return 0;
}
