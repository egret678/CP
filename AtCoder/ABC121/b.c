#include <stdio.h>

int main(){
    int n, m, c;
    int b[30];
    int a[30][30];

    scanf("%d %d %d", &n, &m, &c);
    for(int i = 0; i < m; ++i){
        scanf("%d", &b[i]);
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            scanf("%d", &a[i][j]);
        }
    }

    int sum = 0;
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        sum = 0;
        for(int j = 0; j < m; ++j){
            sum += (a[i][j] * b[j]);
        }
        if(sum + c > 0) cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}
