#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef long long ll;
typedef ll keytype;
typedef void (*FUNCTYPE)();

int gcd(int a, int b){ return (a % b) ? gcd(b, a % b) : b;}
int lcm(int a, int b){ return (a / gcd(a, b)) * b;}

/* a[0], ..., a[n-1] の数の最大公約数 */
int ngcd(int n, int a[])
{
    int i, d;

    d = a[0];
    for (i = 1; i < n && d != 1; i++)
        d = gcd(a[i], d);
    return d;
}

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

int is_prime(ll n){
    if(n <= 1) return 0;
    for(ll i = 2; i * i <= n; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

void enum_divisors(ll div[], ll *num, ll n){
    ll cnt = 0;

    for(ll i = 1; i * i <= n; ++i){
        if(n % i == 0){
            div[cnt++] = i;
            if(n / i != i){
                div[cnt++] = n / i;
            }
        }
    }
    *num = cnt;
    quicksort(div, 0, cnt - 1);
}

// factor list, number of factors, natural number
void factorize(int ftr[], int *num, int n){
    int a = 2, cnt = 0;

    while(n >= a){
        if(n % a == 0){
            n = n / a;
            ftr[cnt++] = a;
        }else{
            a++;
        }
    }
    *num = cnt;
}

int is_substr(char s[], char t[], int i){
    int flag = 1;

    if(s[i] == '\0') flag = 0;

    for(int j = 0; j < strlen(t); ++j, ++i){
        if(s[i] != t[j]){
            flag = 0;
            break;
        }
    }
    return flag;
}

//#define N 5
//int p[N + 1];
int nextperm(keytype p[], int N)  /* 辞書式順序で次の順列 */
{
    int i, j;
    keytype t;

    i = N - 1;
    p[0] = 0;  /* 番人 */
    while (p[i] >= p[i + 1]) i--;
    if (i == 0) return 0;  /* 完了 */
    j = N;
    while (p[i] >= p[j]) j--;
    t = p[i];  p[i] = p[j];  p[j] = t;
    i++;  j = N;
    while (i < j) {
        t = p[i];  p[i] = p[j];  p[j] = t;  i++;  j--;
    }
    return 1;  /* 未了 */
}

void comb(int size1, int size2, int v[size1][size2]){
  for(int i = 0; i < size1; i++){
    v[i][0] = 1;
    v[i][i] = 1;
  }
  for(int k = 1; k < size1; k++){
    for(int j = 1; j < k; j++){
      v[k][j] = (v[k-1][j-1] + v[k-1][j]);
    }
  }
}

int abs_val(int a, int b){
    if(a > b) return a - b;
    else return b - a;
}

ll min_2(ll a, ll b){
    if(a > b) return b;
    else return a;
}

int max(int a, int b){
    if(a < b) return b;
    else return a;
}

typedef struct {
    char* str;
    int num;
} map_t;

int str_cmp(const void* a,const void* b){
    //return strcmp((char*)a,(char*)b);
    return strcmp(((map_t*)a)->str, ((map_t*)b)->str);
}

int num_cmp(const void* p, const void* q){
    //return ((map_t*)p)->num - ((map_t*)q)->num;
    return ((map_t*)q)->num - ((map_t*)p)->num;
}

int floor_negative(int n){
    if(n < 0) return 0;
    else return n;
}

const int inf = 1012345678;
int main(){
    int n, h[300005];
    map_t map[300005];

    scanf("%d", &n);

    int memo = n, cnt= 0;
    while(memo > 0){
        memo /= 10;
        cnt++;
    }
    int ans = 0;
    if((cnt % 2) == 0){
        for(int i = cnt - 1; i >= 1; i -= 2){
            ans += (int)pow(10.0, (double)(i)) - (int)pow(10.0, (double)(i - 1));
        }
    }else{
        ans += (n + 1) - (int)pow(10.0, (double)(cnt - 1));
        for(int i = cnt - 2; i >= 1; i -= 2){
            ans += (int)pow(10.0, (double)(i)) - (int)pow(10.0, (double)(i - 1));
        }
    }

    printf("%d\n", ans);

    return 0;
}
