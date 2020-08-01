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
    int n, k;
    int p[1500];

    scanf("%d %d", &n, &k);
    for(int i = 1; i <= n; ++i){
        scanf("%d", &p[i]);
    }

    quicksort(p, 1, n);
    int sum = 0;
    for(int i = 1; i <= k; ++i){
        sum += p[i];
    }

    printf("%d\n", sum);

    return 0;
}