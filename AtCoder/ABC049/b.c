#include <stdio.h>
#include <string.h>

int main(){
    int h,w;
    char c[105][105];
    char ret[210][210];
    char ch;

    scanf("%d %d", &h, &w);
    for(int i = 0; i < h; ++i){
        scanf("%s", c[i]);
    }

    int k = 0;
    for(int i = 0; i < h; ++i){
        strcpy(ret[k], c[i]);
        strcpy(ret[k+1], c[i]);
        k+=2;
    }

    for(int i = 0; i < 2*h; ++i){
        printf("%s\n", ret[i]);
    }

    return 0;
}
