#include <stdio.h>
#include <string.h>

int main(){
    int n, a, b;
    char s[100001];

    scanf("%d %d %d %s", &n, &a, &b, s);

    int cnt = 0;
    int cnt_foreign = 0;
    char ans[100001] = {0};
    for(int i = 0; i < n; ++i){
        if((s[i] == 'a') && (cnt < (a + b))){
            cnt++;
            ans[i] = 1;
        }else if((s[i] == 'b') && (cnt < (a + b)) && ((cnt_foreign + 1) <= b)){
            cnt++;
            cnt_foreign++;
            ans[i] = 1;
        }else{
            ;
        }
    }

    for(int i = 0; i < n; ++i){
        if(ans[i] == 1) puts("Yes");
        else puts("No");
    }

    return 0;
}
