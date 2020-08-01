#include <stdio.h>

int main(){
    int x, y;

    scanf("%d %d", &x, &y);

    int ans = 0;
    for(int i = 0; i <= x; ++i){
        if((2 * i + 4 * (x - i)) == y){
            ans = 1;
            break;
        }else{
            ans = 0;
        }
    }

    if(ans) puts("Yes");
    else puts("No");

    return 0;
}