#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef long long ll;
typedef char keytype;

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

int is_prime(int x){
    if(x <= 1) return 0;
    for(int i = 2; i * i <= x; i++){
        if(x % i == 0) return 0;
    }
    return 1;
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

//#define N 5
//int p[N + 1];
int nextperm(int p[], int N)  /* 辞書式順序で次の順列 */
{
    int i, j, t;

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

const int inf = 1012345678;
int main(){
    char s[100005], a[100005], b[100005];

    scanf("%s", s);

    int size = (int)strlen(s);
    a[0] = 0;
    b[0] = 1;
    for(int i = 0; i < size; ++i){
        a[i+1] = (~a[i]) & 0x01;
        b[i+1] = (~b[i]) & 0x01;
        //printf("%d", b[i]);
    }
    //puts("");

    int cnt_a = 0, cnt_b = 0;
    for(int i = 0; i < size; ++i){
        s[i] = s[i] - '0';
        //printf("%d\n", s[i]);
        if(s[i] == a[i]){
            cnt_a++;
        }else{
            cnt_b++;
        }
    }

    if(cnt_a < cnt_b) printf("%d\n", cnt_a);
    else printf("%d\n", cnt_b);

#if 0
    //int i = 0;
    int size = (int)strlen(s);
    //printf("%lu\n", strlen(s));
    for(int i = 0; i < size; ++i){
        s[i] = s[i] - '0';
        t[i] = s[i];
        //printf("%d\n", i);
    }

    if(size == 1){
        puts("0");
        return 0;
    }
    int cnt_w = 0;
    for(int j = 0; j < size; ++j){
        if((s[j] ^ s[j+1]) == 0){
            s[j+1] = ~s[j+1];
            cnt_w++;
            //printf("%d\n", s[i]);
        }
    }
    t[0] = ~t[0];
    int cnt_b = 0;
    for(int j = 0; j < size; ++j){
        if((t[j] ^ t[j+1]) == 0){
            t[j+1] = ~t[j+1];
            cnt_b++;
            //printf("%d\n", s[i]);
        }
    }
#endif

    return 0;
}
