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

int is_prime(int x){
    if(x <= 1) return 0;
    for(int i = 2; i * i <= x; i++){
        if(x % i == 0) return 0;
    }
    return 1;
}

int main(){
    ll a, b, k;

    scanf("%lld %lld %lld", &a, &b, &k);

    if(a >= k){
        a = a - k;
    }else{
        if(b >= (k - a)){
            b = b - (k - a);
            a = 0;
        }else{
            b = 0;
            a = 0;
        }

    }

    printf("%lld %lld\n", a, b);

    return 0;
}
