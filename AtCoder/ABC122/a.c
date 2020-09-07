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
    char b;

    scanf("%c", &b);

    if(b == 'A') puts("T");
    else if(b == 'T') puts("A");
    else if(b == 'C') puts("G");
    else puts("C");

    return 0;
}
