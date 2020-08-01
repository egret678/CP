#include <stdio.h>

typedef int keytype;

void inssort(int n, keytype a[])
{
    int i, j;
    keytype x;

    for (i = 1; i < n; i++) {
        x = a[i];
        for (j = i - 1; j >= 0 && a[j] > x; j--)
            a[j + 1] = a[j];
        a[j + 1] = x;
    }
}

#define THRESHOLD 10
#define STACKSIZE 32  /* たかだか int のビット数程度 */

void quicksort(int n, keytype a[])
{
    int i, j, left, right, p;
    int leftstack[STACKSIZE], rightstack[STACKSIZE];
    keytype x, t;

    left = 0;  right = n - 1;  p = 0;
    for ( ; ; ) {
        if (right - left <= THRESHOLD) {
            if (p == 0) break;
            p--;
            left = leftstack[p];
            right = rightstack[p];
        }
        x = a[(left + right) / 2];
        i = left;  j = right;
        for ( ; ; ) {
            while (a[i] < x) i++;
            while (x < a[j]) j--;
            if (i >= j) break;
            t = a[i];  a[i] = a[j];  a[j] = t;
            i++;  j--;
        }
        if (i - left > right - j) {
            if (i - left > THRESHOLD) {
                leftstack[p] = left;
                rightstack[p] = i - 1;
                p++;
            }
            left = j + 1;
        } else {
            if (right - j > THRESHOLD) {
                leftstack[p] = j + 1;
                rightstack[p] = right;
                p++;
            }
            right = i - 1;
        }
    }
    inssort(n, a);
}

int main(){
    int x, n;
    int p[110];

    scanf("%d %d", &x, &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &p[i]);
    }

    quicksort(n, p);

    /*
    for(int i = 0; i < n; i++){
        printf("%d ", p[i]);
    }
    puts("");
    */
    int flag = 0, ans = x;
    int i;
    for(i = 0; i < n; ++i){
        if(p[i] == x){
            flag = 1;
            break;
        }
    }
    
    if(flag){
        int j = 1;
        while(1){
            if((x - j) != p[i - j]){
                ans = x - j;
                break;
            }
            if((x + j) != p[i + j]){
                ans = x + j;
                break;
            }
            j++;
        }
    }

    printf("%d\n", ans);

    return 0;
}