#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef long long ll;
typedef double keytype;

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
    double v[100];

    scanf("%d", &n);
    for(int i = 0; i < n; ++i){
        scanf("%lf", &v[i]);
    }

    quicksort(v, 0, n-1);
    int sum = 0;
    for(int i = 0; i < n - 1; ++i){
        v[i+1] = (v[i] + v[i+1]) / 2.0;
    }

    printf("%f\n", v[n-1]);

    return 0;
}
