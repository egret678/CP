#include <stdio.h>

#define ll long long

int gcd(int a, int b){
    return b ? gcd(b, a % b) : a;
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


int main(void){
    int a, b;
    int a_ftr[100], num;
    
    scanf("%d %d", &a, &b);

    factorize(a_ftr, &num, a);

    for(int i = 0; i < num; ++i){
        printf("%d ", a_ftr[i]);
    }
    puts("\n");

    return 0;
}