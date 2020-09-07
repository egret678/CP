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
    int n, m, x;
    int a[100];

    scanf("%d %d %d", &n, &m, &x);
    for(int i = 0; i < m; ++i){
        scanf("%d", &a[i]);
    }

    int cnt_down = 0, cnt_up = 0;
    for(int i = 0; i < m; ++i){
        if(x > a[i]) cnt_down++;
        else cnt_up++;
    }

    if(cnt_down < cnt_up) printf("%d\n", cnt_down);
    else printf("%d\n", cnt_up);

    return 0;
}
