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
    char s[11];

    scanf("%s", s);

    int max = 0;
    for(int i = 0; i < strlen(s); ++i){
        int cnt = 0;
        if(s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T'){
            cnt++;
            for(int j = i + 1; j < strlen(s); ++j){
                if(s[j] == 'A' || s[j] == 'C' || s[j] == 'G' || s[j] == 'T'){
                    cnt++;
                }else{
                    break;
                }
            }
        }
        if(max < cnt) max = cnt;
    }

    printf("%d\n", max);

    return 0;
}
