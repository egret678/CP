#include <stdio.h>

int main(){
    int n;
    int d[200];

    scanf("%d", &n);
    int cnt = 0;
    int flag = 1;
    for(int i = 0; i < n; ++i){
        scanf("%d", &d[i]);
        for(int j = 0; j < i; ++j){
            if(d[i] == d[j]) flag = 0;
        }
        if(flag == 1) cnt++;
        flag = 1;
    }

    printf("%d\n", cnt);

    return 0;
}