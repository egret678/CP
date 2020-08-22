#include <stdio.h>

typedef int keytype;

void quicksort(keytype a[], int first, int last)
{
    int i, j;
    keytype x, t;

    x = a[(first + last) / 2];
    i = first;  j = last;
    for ( ; ; ) {
        while (a[i] < x) i++;
        while (x < a[j]) j--;
        if (i >= j) break;
        t = a[i];  a[i] = a[j];  a[j] = t;
        i++;  j--;
    }
    if (first  < i - 1) quicksort(a, first , i - 1);
    if (j + 1 < last) quicksort(a, j + 1, last);
}

int main(){
    int n;
    int l[1000];

    scanf("%d", &n);
    for(int i = 0; i < n; ++i){
        scanf("%d", &l[i]);
    }

    quicksort(l, 0, n-1);

    int ans = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < i; ++j){
            for(int k = 0; k < j; ++k){
                if(l[k] != l[j] && l[j] != l[i] && (l[k] + l[j]) > l[i]) ans++;
            }
        }
    }

    printf("%d\n", ans);

    return 0;
}
