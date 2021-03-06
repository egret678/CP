#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef long long ll;
typedef char keytype;

void quicksort_des(keytype a[], int first, int last)
{
    int i, j;
    keytype x, t;

    x = a[(first + last) / 2];
    i = first;  j = last;
    for ( ; ; ) {
        while (a[i] > x) i++;
        while (x > a[j]) j--;
        if (i >= j) break;
        t = a[i];  a[i] = a[j];  a[j] = t;
        i++;  j--;
    }
    if (first  < i - 1) quicksort_des(a, first , i - 1);
    if (j + 1 < last) quicksort_des(a, j + 1, last);
}

int main(){
    int n;
    int p[100];

    scanf("%d", &n);
    for(int i = 0; i < n; ++i){
        scanf("%d", &p[i]);
    }

    int cnt = 0;
    for(int i = 0; i + 2 < n; ++i){
        if(p[i] < p[i+1] && p[i+1] < p[i+2]) cnt++;
        if(p[i] > p[i+1] && p[i+1] > p[i+2]) cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}
