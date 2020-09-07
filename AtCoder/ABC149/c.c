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
    int x;

    scanf("%d", &x);

    int flag = 1;
    for(int i = 0; (x + i) < 100005; ++i){
        for(int j = 2; j <= (x + i) / 2; ++j){
            if(((x + i) % j) == 0){
                flag = 0;
                break;
            }else{
                flag = 1;
            }
        }
        if(flag == 1){
            printf("%d\n", x + i);
            return 0;
        }
    }

    return 0;
}
