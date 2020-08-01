#include <stdio.h>

int main(void){
    int n, m, k;
    int a[200005], b[200005];

    scanf("%d %d %d", &n, &m, &k);
    for(int i = 1; i <= n; ++i){
        scanf("%d", &a[i]);
    }
    for(int i = 1; i <= m; ++i){
        scanf("%d", &b[i]);
    }

    int sum = 0, i = 1, j = 1;
    while(sum < k){
        if(a[i] <= b[j]){
            sum += a[i];
            i++;
            if(i == (n + 1)){
                a[n+1] = 1000000000;
            }
        }else{
            sum += b[j];
            j++;
            if(j == (m + 1)){
                b[m+1] = 1000000000;
            }
        }
        if(i == (n + 1) && j == (m + 1)) break;
    }
    
    if(i == (n + 1) && j == (m + 1)) printf("%d\n", (i - 1) + (j - 1));
    else printf("%d\n", (i - 1) + (j - 1) - 1);

    return 0;
}