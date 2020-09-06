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
    char s[5];

    scanf("%s", s);

    quicksort_des(s, 0, 3);

    if(s[0] == s[1] && s[2] == s[3] && s[0] != s[2]) puts("Yes");
    else puts("No");

    return 0;
}
