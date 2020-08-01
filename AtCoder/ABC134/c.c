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

int main(void){
    int n;
    int a[300000];

    scanf("%d", &n);
    for(int i = 0; i < n; ++i){
        scanf("%d", &a[i]);
    }

    int max = 0;
    for(int i = 1; i < n; ++i){
        if(a[max] < a[i]) max = i;
    }
    //printf("%d\n", max);
    quicksort(a, 0, n - 1);

    for(int i = 0; i < n; ++i){
        if(i == max) printf("%d\n", a[n-2]);
        else printf("%d\n", a[n-1]);
    }

    return 0;
}