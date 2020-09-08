#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef long long ll;
typedef int keytype;

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
    int n, x;
    int a[100];

    scanf("%d %d", &n, &x);
    for(int i = 0; i < n; ++i){
        scanf("%d", &a[i]);
    }

    quicksort(a, 0, n-1);
    int sum = 0;
    int ans;
    for(int i = 0; i < n; ++i){
        sum += a[i];
        if(sum > x){
            ans = i;
            break;
        }else if(sum == x){
            ans = i + 1;
        }else{
            if(i == n - 1){
                ans = i;
            }else{
                ;
            }
        }
    }

    printf("%d\n", ans);

    return 0;
}
