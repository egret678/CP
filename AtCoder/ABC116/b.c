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
    int s;
    int a[1000000];

    scanf("%d", &s);

    a[0] = s;
    for(int i = 0; i < 1000000; ++i){
        //printf("%d\n", a[i]);
        if(a[i] % 2 == 0){
            a[i+1] = a[i] / 2;
            //printf("%d\n", a[i]);
        }else{
            a[i+1] = 3 * a[i] + 1;
            //printf("%d\n", a[i]);
        }
    }
    //printf("%d\n", a[4]);

    for(int i = 0; i < 1000000; ++i){
        for(int j = i+1; j< 1000000; ++j){
            if(a[i] == a[j]){
                int ans = j + 1;
                printf("%d\n", ans);
                return 0;
            }
        }
    }

    return 0;
}
