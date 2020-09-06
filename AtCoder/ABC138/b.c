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
    double a[1005];

    scanf("%d", &n);
    for(int i = 0; i < n; ++i){
        scanf("%lf", &a[i]);
    }

    double sum = 0.0;
    for(int i = 0; i < n; ++i){
        sum += (1.0 / a[i]);
    }

    printf("%f\n", 1.0 / sum);

    return 0;
}
